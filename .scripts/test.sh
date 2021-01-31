#!/bin/bash

BUILD_TYPE='Debug'

if [[ $1 == '-r' || $1 == '--release' ]]; then
    BUILD_TYPE='Release'
fi

cd build/src

ctest . -C $BUILD_TYPE -R dirg* --output-on-failure

