#!/bin/bash
gcc test.c  -o test.exe 
# Optimize size:
# gcc test.c  -o testsmall.exe  -O2 -s
# Generate assembly code:
# gcc -o test.asm  -S  test.c