#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string value
 * @s2: sting2 value
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		x = *s1 - *s2;

	return (x);
}
