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
	int letter;
	int number, result_ct;

	result_ct = 0;
	switch (c)
	{
		case 'c':
			letter = va_arg(num, int);
			_putchar(letter);
			result_ct = 1;
			break;
		case 's':
			string = va_arg(num, char *);
			result_ct = print_string(string);
			break;
		case '%':
			_putchar('%');
			result_ct = 1;
			break;
		case 'd':
		case 'i':
			number = va_arg(num, int);
			result_ct = print_numbers(number);
			break;
		case 'b':
			number = va_arg(num, int);
			result_ct = decimal_to_binary(_abs(number));
			break;
	}
	return (result_ct);
}

/**
 * print_numbers - prints numbers
 * @number: The number to be printed
 *
 * Return: The number of characters printed
 */
int print_numbers(int number)
{
	int divsr, count, temp1, temp2, rem;

	temp1 = _abs(number);
	temp2 = temp1;
	divsr = 1;
	while (temp1 > 9)
	{
		divsr *= 10;
		temp1 /= 10;
	}
	count = 0;
	if (number < 0)
	{
		_putchar('-');
		count += 1;
	}
	while (divsr > 0)
	{
		rem = temp2 % divsr;
		_putchar(temp2 / divsr + 48);
		divsr /= 10;
		temp2 = rem;
		count += 1;
	}
	return (count);
}

