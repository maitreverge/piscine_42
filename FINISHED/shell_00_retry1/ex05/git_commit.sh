#! /bin/sh
git log --oneline --no-abbrev-commit | cut -d " " -f 1 | head -5 
