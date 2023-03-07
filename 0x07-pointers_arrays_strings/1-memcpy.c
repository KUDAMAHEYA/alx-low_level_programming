#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to memory
 * @src: pointer to copied
 * @n: size of bytets
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
