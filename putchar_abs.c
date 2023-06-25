#include <unistd.h>

/**
 * _putchar - prints a character
 * @charctr: A character
 *
 * Return: On success 1, Otherwise return -1
 */
int _putchar(char charctr)
{
	int i;

	i = write(1, &charctr, 1);
	return (i);
}

/**
 * _abs - computes the absolute value of a number
 * @num: A number
 *
 * Return: The absolute value of the number
 */
int _abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

