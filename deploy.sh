#!/bin/bash

# ref: https://gist.github.com/domenic/ec8b0fc8ab45f39403dd

set -e # Exit with nonzero exit code if anything fails

SOURCE_BRANCH="master"
TARGET_BRANCH="gh-pages"

# Pull requests and commits to other branches shouldn't try to deploy, just build to verify
if [ "$TRAVIS_PULL_REQUEST" != "false" -o "$TRAVIS_BRANCH" != "$SOURCE_BRANCH" ]; then
	echo "Skipping deploy; just doing a build."
	make -B
	exit 0
fi

# Save some useful information
REPO=`git config remote.origin.url`
SSH_REPO=${REPO/https:\/\/github.com\//git@github.com:}
NOTES_SHA=`git rev-parse --verify HEAD`

# Clone the existing gh-pages for this repo into out/
# Create a new empty branch if gh-pages doesn't exist yet (should only happen on first deply)
git clone $REPO out
cd out
git checkout $TARGET_BRANCH || git checkout --orphan $TARGET_BRANCH
cd ..

# Clean out existing contents
rm -rf out/**/* || exit 0

# Run our compile script
git clone https://github.com/mewpull/Scripture
export notes_path=`pwd`
cd Scripture
SCRIPTURE_SHA=`git rev-parse --verify HEAD`
pip install -r requirements.txt
mv extract.sh.sample extract.sh
chmod +x extract.sh
echo "Generating pages using Scripture"
./extract.sh
cp -r ./site/* ${notes_path}/out/

# Now let's go have some fun with the cloned repo
cd ${notes_path}/out
git config user.name "Travis CI"
git config user.email "travis@local.invalid"

# Commit the "changes", i.e. the new version.
# The delta will show diffs between new and old versions.
git add -A .
git commit -m "update to rev ${NOTES_SHA} using Predelnik/Scripture@${SCRIPTURE_SHA}"

# Get the deploy key by using Travis's stored variables to decrypt deploy_key.enc
openssl aes-256-cbc -K $encrypted_4567f3d26443_key -iv $encrypted_4567f3d26443_iv -in ../deploy_key.enc -out ../deploy_key -d
chmod 600 ../deploy_key
eval `ssh-agent -s`
ssh-add ../deploy_key

# Now that we're all set up, we can push.
git push $SSH_REPO $TARGET_BRANCH

rm ../deploy_key
