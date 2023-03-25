#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ng;

	va_start(ng, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ng, int);

	va_end(ng);

	return (sum);
}
