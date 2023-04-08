#!bin/bash

# a script that creates a static library
# from all the .c files
# that are in the current directory

gcc -c *.c
ar rc liball.a *.o
