#! /bin/sh
git status --ignored -s | cut -d "/" -f 2
