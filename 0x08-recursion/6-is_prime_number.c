#include "main.h"

/**
 * prime_check - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @x: Factor value
 * @y: prime int value
 * Return: 1 if prime, 0 if not
 *
 */

int prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_check(x + 1, y));
}

/**
 * is_prime_number -  if number is prime condition
 * @n: int value
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
