#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - produces output according to format
 * @format: A character string with print directives
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list num;
	int i;
	int char_ct;

	if (format == NULL)
		return (-1);
	char_ct = 0;
	va_start(num, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i += 1;
			char_ct += print_char_string(format[i], num);
		}
		else
		{
			_putchar(format[i]);
			char_ct += 1;
		}
		i += 1;
	}
	va_end(num);
	return (char_ct);
}
