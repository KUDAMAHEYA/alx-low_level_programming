#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to assess
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int xy;

	xy = 0;

	while (s[xy] != '\0')
	{
		xy++;
	}

	return (xy);
}
