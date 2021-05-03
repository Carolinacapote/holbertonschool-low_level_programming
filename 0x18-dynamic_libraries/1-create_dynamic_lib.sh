#!/bin/bash
gcc -Wall -fPIC -pedantic -Werror -Wextra -c *.c
gcc -shared -o liball.so *.o
