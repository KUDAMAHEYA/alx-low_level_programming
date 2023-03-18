#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *num;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	num = malloc(sizeof(int) * size);

	if (num == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		num[i] = min++;

	return (num);
}
