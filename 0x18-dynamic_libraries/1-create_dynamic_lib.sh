#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

# Create the dynamic library liball.so from all the object files
gcc -shared -o liball.so *.o

# Remove the object files
rm *.o
