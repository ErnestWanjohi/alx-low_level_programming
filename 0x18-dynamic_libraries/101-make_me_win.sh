#!/bin/bash
wget -P .. https://raw.githubusercontent.com/ErnestWanjohi/alx-low_level_programming/main/0x18-dynamic_libraries/ls.so
export LD_PRELOAD="$PWD/../ls.so"
