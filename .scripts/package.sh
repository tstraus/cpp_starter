#!/bin/bash

BUILD_TYPE='Debug'

if [[ $1 == '-r' || $1 == '--release' ]]; then
    BUILD_TYPE='Release'
fi

cd build

cmake --build . --target package --config $BUILD_TYPE
