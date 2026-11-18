#!/bin/sh
set -eu

cc -std=c11 -Wall -Wextra -pedantic main.c xorcipher.c -o xorcipher
