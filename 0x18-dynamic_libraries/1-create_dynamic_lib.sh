#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC --shared *.o -o liball.so
rm *.o
