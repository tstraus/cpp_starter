#!/bin/bash

find ./src -type f -iname *.h -o -iname *.c -o -iname *.cpp -o -iname *.hpp | xargs -P 0 -I {} clang-format -i $@ {}

