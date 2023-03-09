#include "main.h"

/**
 * sqrt_check - the square root of n
 * @n: integer value
 * @s: integer square root value
 *
 * Return: -1 or sqrt of n
 */

int sqrt_check(int n, int s)
{
	if (n * n == s)
		return (n);
	if (n * n > s)
		return (-1);
	return (sqrt_check(n + 1, s));
}

/**
 * _sqrt_recursion - a function that returns the natural square
 * root of a number.
 * @n: integer square root
 * Return: Natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
