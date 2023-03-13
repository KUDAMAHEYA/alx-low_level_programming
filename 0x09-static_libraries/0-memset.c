#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to fill up
 * @b: value to copy
 * @n: number of bytes of memory area @s to be filled with @b
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
