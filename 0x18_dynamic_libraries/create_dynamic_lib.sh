#!/bin/bash

# Execute this script using : . ./script.sh or source ./script.sh

#c - compile to object files but don't link
#-fPIC - Position Independent Code Generation makes use of referential addresses

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c -fPIC  *.c 
gcc *.o -shared -o liball.so
rm *.o

# Adding non-standard path so that the system can include CWD in the search for dyn-libs

LD_LIBRARY_PATH="$PWD"
export LD_LIBRARY_PATH

