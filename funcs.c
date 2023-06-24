#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char_string - prints a character or string
 * @c: A character conversion specifier
 * @num: A variable to access the argument list
 *
 * Return: The number of characters printed
 */
int print_char_string(char c, va_list num)
{
	char *string;
	int letter, j;

	switch (c)
	{
		case 'c':
			letter = va_arg(num, int);
			_putchar(letter);
			return (1);
		case 's':
			string = va_arg(num, char *);
			j = 0;
			if (string != NULL)
			{
				while (string[j] != '\0')
				{
					_putchar(string[j]);
					j++;
				}
			}
			break;
		case '%':
			_putchar('%');
			return (1);
	}
	return (j);
}

