#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @y: string to change
 *
 * Return: y
 */
char *string_toupper(char *y)
{
	int x;

	for (x = 0; y[x] != '\0'; x++)
	{
		if (y[x] >= 'a' && y[x] <= 'z')
			y[x] = y[x] - 32;
	}

	return (y);
}
