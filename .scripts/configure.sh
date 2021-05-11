#!/bin/bash

BUILD_TYPE='Debug'

if [[ $1 == '-r' || $1 == '--release' ]]; then
    BUILD_TYPE='Release'
fi

if [ ! -d build ]; then
    mkdir build
fi

cd build

if [[ -e `command -v clang` && -e `command -v clang++` ]]; then
    export CC=`command -v clang`
    export CXX=`command -v clang++`

    if [[ -e `command -v lld` ]]; then # manual lld and LTO
        LLD_FLAGS='-DCMAKE_CXX_FLAGS="-flto" -DCMAKE_C_FLAGS=-flto -DCMAKE_EXE_LINKER_FLAGS="-fuse-ld=lld" -DCMAKE_SHARED_LINKER_FLAGS="-fuse-ld=lld"'
    fi
fi

if [[ -e `command -v ninja`|| -e `command -v ninja-build` ]]; then
    cmake -G Ninja $LLD_FLAGS -DCMAKE_BUILD_TYPE=$BUILD_TYPE -DCMAKE_INSTALL_PREFIX:PATH=dist ..
else
    cmake $LLD_FLAGS -DCMAKE_BUILD_TYPE=$BUILD_TYPE -DCMAKE_INSTALL_PREFIX:PATH=dist ..
fi
