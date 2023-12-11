#!/bin/bash
wget -O /tmp/win.so https://github.com/Wehda23/alx-low_level_programming/raw/master/0x17-dynamic_libraries/gigawin.so
export LD_PRELOAD=/tmp/gigawin.so
