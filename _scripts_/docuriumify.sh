#!/bin/bash

# This script converts comments into the format expected by docurium.

# Parse command line arguments.
if [ $# -ne 1 ]; then
	echo "Usage: docuriumify.sh FILE.cpp"
	exit 1
fi
cpp_file=$1

# Line comment starting at the beginning of the line.
#
# Replace `// foo` with `/// foo`
sar -i '(^|[\n])//([^/\n])' '${1}///${2}' ${cpp_file}

# Empty line comment starting at the beginning of the line.
#
# Replace `//` with `///`
sar -i '[\n]//[\n]' '\n///\n' ${cpp_file}
