#!/bin/bash
wget -P /tmp https://github.com/Wehda23/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigawin.so
export LD_PRELOAD=/tmp/gigawin.so
