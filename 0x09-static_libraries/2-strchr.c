#include "main.h"

/**
 * _strchr - Loctes a character in a string
 * @s: sting to check
 * @c: char value
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
