#!/bin/bash

if [ -f build/compile_commands.json ]; then
    ln -s build/compile_commands.json
fi

