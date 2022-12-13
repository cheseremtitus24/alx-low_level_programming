#!/bin/bash
#c - compile to object files but don't link
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c  *.c 
# r - replace old symbol references
# c - create new symbole references library
ar -rc liball.a *.o
# update symbol indexes
ranlib libutil.a
