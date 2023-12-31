#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * decimal_to_binary - converts a number from decimal to binary
 * @number: The number to be converted to binary
 *
 * Return: The number of numbers printed
 */
int decimal_to_binary(int number)
{
	int i, count, array[20];

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}
	count = 0;
	i = 0;
	while (number > 0)
	{
		array[i++] = number % 2;
		number /= 2;
		count += 1;
	}
	i = count;
	while (i)
	{
		_putchar(array[--i] + 48);
	}
	return (count);
}

/**
 * print_string - prints a string
 * @str: A pointer to the string
 *
 * Return: The number of characters printed
 */
int print_string(char *str)
{
	int j;

	j = 0;
	if (str != NULL)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	return (j);
}
