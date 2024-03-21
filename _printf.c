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
	va_list argu;
	int i = 0, count = 0;

	va_start(argu, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			count += get_format(format[i], argu);
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
