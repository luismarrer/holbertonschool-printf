#include "main.h"

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

	if (format == NULL)
	{
		return (-1);
	}

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1)
			}

			for (j = 0; conver[j].format != NULL; j++)
			{
				if (format[i] == conver[j].format[0])
				{
					count += conver[j].function(argu);
					break;`
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
