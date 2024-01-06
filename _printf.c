#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: The format string.
 * Return: The number of characters printed (excluding the null byte used).
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0' ;)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 's':
				len += print_str(args);
				i += 2;
				continue;
				case 'c':
				len += print_char(args);
				i = i + 2;
				continue;
				case 'i':
				len += print_int(args);
				i = i + 2;
				continue;
				case'd':
				len += print_int(args);
				i = i + 2;
				continue;
				case'%':
				i += 1;
				break;
			}
		}
		len += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
