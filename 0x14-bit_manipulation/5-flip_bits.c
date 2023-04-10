#include "main.h"

/**
* flip_bits - a function that returns the number of bits
* you would need to flip to get from one number to another.
*@n: num
*@m: end num
*
*Return: the number of diffrent bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
