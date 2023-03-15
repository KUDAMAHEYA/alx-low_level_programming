#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to assign
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cs;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cs = malloc(sizeof(c) * size);

	if (cs == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cs[i] = c;

	return (cs);
}
