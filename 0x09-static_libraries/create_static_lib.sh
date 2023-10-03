#!/bin/bash

#Compile all .c files into .o files
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

#Create a static library named liballa.a from all .o files
ar -rc liball.a *.o
