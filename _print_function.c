#include "main.h"

/**
 * print_char - print a character.
 *
 * @argu: char to print.
 *
 * Return: numbers of arguments.
 *
 */

int print_char(va_list argu)
{
	_putchar(va_arg(argu, int));

	return (1);
}

/**
 * print_string - print a string.
 *
 * @argu: character to print.
 *
 * Return: numbers of arguments.
 *
 */

int print_string(va_list argu)
{
	char *str = va_arg(argu, char *);
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str != '\0')
	{
		_putchar(*str++);
		count++;

	}

	return (count);
}

/**
 * print_percent - print '%'
 *
 * @argu: is ignored.
 *
 * Return: 1
 *
 */

int print_percent(__attribute__((unused))va_list argu)
{
	_putchar('%');

	return (1);
}


