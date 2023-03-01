#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: string value
 * @dest: destination string value
 * @n: intager
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
