#! /bin/sh
find . -name "*.sh" | cut -c 3- | rev | cut -c 4- | cut -d "/" -f 1 | rev | cat -e
