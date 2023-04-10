#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 * @b: the binary number as a string
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
