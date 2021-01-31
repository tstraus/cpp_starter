#!/bin/bash

BUILD_TYPE='Debug'

if [[ $1 == '-r' || $1 == '--release' ]]; then
    BUILD_TYPE='Release'
fi

cd build

cmake --build . --config $BUILD_TYPE --target install --parallel
