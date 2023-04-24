#!/bin/bash
# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# create static library from objecct iles
ar rcs liball.a *.o

