#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct converter - Choose the format to print.
 *
 * @format: Is a character string that specifier the conversion.
 *
 * @function: The function associated to the string type.
 *
 */

typedef struct converter
{
char *format;
int (*function)(va_list);
} converter_t;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list argu);
int print_string(va_list argu);
int print_percent(__attribute__((unused))va_list argu);
int get_format(const char specifier, va_list argu);


#endif
