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

/**
 * print_number - print an integer.
 *
 * @argu: argument to print.
 *
 * Return: Number of characters printed
 */

int print_number(va_list argu)
{
	int count = 0;
	int num = va_arg(argu, int);
	unsigned int num_absoluto, busc_magni, divisor = 1;

	if (num < 0)
	{
		_putchar ('-');
		count++;
		num_absoluto = -num;
	}

	else
	{
		num_absoluto = num;
	}

	busc_magni = num_absoluto;

	while (busc_magni > 9)
	{
		busc_magni /= 10;
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((num_absoluto / divisor) % 10 + '0');
		count++;
		divisor /= 10;
	}

	return (count);
}


