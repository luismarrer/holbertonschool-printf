# printf Project

This Holberton project is a custom implementation of the `printf` function from the C standard library.
The goal is to learn the basic principles of variadic functions in C,
how to use them, and apply them in a practical project by replicating a simplified version of `printf`.

## Description

The project simulates the `printf` function of C, which is found in the stdio.h library,
allowing the printing of varied formats such as characters, strings, integers, and floating-point numbers.
Basic format specifiers are handled, and the management of variadic arguments is applied to implement this functionality.

## Requirements

- GCC compiler with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Global variables are not allowed.
- A maximum of 5 functions per file is allowed.

## Compilation

The code in Intranet will be compiled in the following way:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


## Authorized Functions and Macros

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

## Authors

> Luis E. Marrero González - lmarrero1070@gmail.com
Yavier Maldonado -
