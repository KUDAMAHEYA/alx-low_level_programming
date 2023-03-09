#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 * @n: int number
 * Return: int square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - a function that returns the natural square root of a number.
 * @n: integer value
 * @r: integer square root value
 * Return: If n does not have a natural square root, the function should return -1
 */
int _sqrt(int n, int r)
{
	if (n < 0)
		return (-1);
	if ((r * r) > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_sqrt(n, r + 1));
}
