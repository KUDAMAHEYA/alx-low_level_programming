#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: size of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *amm;

	amm = malloc(b);

	if (amm == NULL)
		exit(98);

	return (amm);
}
