#!/bin/bash
wget -qO ../preload.so "https://github.com/Davenchy/alx-low_level_programming/raw/main/0x18-dynamic_libraries/preload.so"
export LD_PRELOAD="../preload.so"
