#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
gcc -o liball.so -shared *.o
