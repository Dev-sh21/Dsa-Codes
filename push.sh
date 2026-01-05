#!/bin/bash

# check if there is any change
if [ -z "$(git status --porcelain)" ]; then
  echo "Nothing to commit, working tree clean"
  exit 0
fi

git add .

# auto commit message with timestamp
git commit -m "auto commit: $(date '+%Y-%m-%d %H:%M:%S')"

git push
