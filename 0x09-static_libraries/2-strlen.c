#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: sting char
 * Return: length
 */

int _strlen(char *s)
{
	int lengt = 0;

	while (*s != '\0')
	{
		lengt++;
		s++;
	}

	return (lengt);
}
