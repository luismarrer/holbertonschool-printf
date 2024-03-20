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

	while (*str != '\0')
	{
		_putchar(*str++);
		count++;

	}

	return (count);
}

int print_percent(__attribute__((unused))va_list argu)
{
	_putchar('%');

	return (1);
}


/**
 * _printf - function similar to printf funtion from the standard library.
 *
 * @format: format is a character string. This string is to remplace...
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{

	converter_t conver[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{NULL, NULL},
	};
	va_list argu;
	int i = 0, count = 0, j;

	va_start(argu, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; conver[j].format != NULL; j++)
			{
				if (format[i] == conver[j].format[0])
				{
					count += conver[j].function(argu);
					break;
				}
			}
		}

		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;

	}

	va_end(argu);

	return (count);
}
