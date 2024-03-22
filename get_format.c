#include "main.h"

/**
 * get_format - Helper function to handle format specifiers.
 *
 * @specifier: Is the char to compare.
 *
 * @argu: The arguments with which the functions to be called will work.
 *
 * Return: The number of characters printed.
 *
 */

int get_format(const char specifier, va_list argu)
{
	converter_t conver[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{"i", print_number},
	{"d", print_number},
	{NULL, NULL},
	};
	int i;

	for (i = 0; conver[i].format != NULL; i++)
	{
		if (specifier == conver[i].format[0])
		{
			return (conver[i].function(argu));
		}
	}

	_putchar('%');
	_putchar(specifier);

	return (2);
}

