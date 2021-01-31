#!/bin/bash

# try running like '.scripts/tidy.sh --fix'

find ./src -type f -iname *.h -o -iname *.c -o -iname *.cpp -o -iname *.hpp | xargs -I {} clang-tidy --quiet $@ {}

