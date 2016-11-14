#!/bin/bash
find diabpsx/ -type f -print0 | xargs -0 go run progress.go > README.md
