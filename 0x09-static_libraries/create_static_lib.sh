#!/bin/bash

# compile all .c files on the current directory
gcc -c *.c

# create the static library
ar rcs liball.a *.o

# clean
# rm *.o
