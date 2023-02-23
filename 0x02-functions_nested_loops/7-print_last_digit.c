#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: to be examined
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	c = n % 10;

	if (c < 0)
		c = -c;

	_putchar(c + '0');

	return (c);
}
