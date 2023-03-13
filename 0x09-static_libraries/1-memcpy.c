#include "main.h"

/**
 * _memcpy - Copies content from source to destination
 * memory area
 * @src: origin memory area
 * @dest: copied memory source
 * @n: Number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
