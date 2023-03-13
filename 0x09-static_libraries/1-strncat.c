#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: end  of the line string
 * @src: origin string
 * @n: int bytes to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
