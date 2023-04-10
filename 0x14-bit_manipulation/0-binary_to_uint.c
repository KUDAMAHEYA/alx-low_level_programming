#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: the binary number as a string
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}

