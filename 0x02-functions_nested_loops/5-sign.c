#include "main.h"

/**
 * a function that prints the sign of a numbe
 * @n: num being examined 
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(53);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

