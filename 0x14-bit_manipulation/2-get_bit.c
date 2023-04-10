#include "main.h"

/**
*get_bit - a function that returns the value of a bit at a given index
*@n: num
*@index: index starting from 0
*
*Return: value at input index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
