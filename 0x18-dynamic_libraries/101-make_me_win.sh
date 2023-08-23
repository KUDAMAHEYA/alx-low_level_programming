#!/bin/bash
gcc -shared -o docfile.so -fPIC test.c
export LD_PRELOAD=./docfile.so:$LD_LIBRARY_PATH
