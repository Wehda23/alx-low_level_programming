#!/bin/bash
wget -O /tmp/win.so https://github.com/Zevrov/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/gigawin.so
export LD_PRELOAD=/tmp/gigawin.so
