#! /bin/sh
git log --oneline --no-abbrev-commit | cut -d " " -f 1 | tail -5
