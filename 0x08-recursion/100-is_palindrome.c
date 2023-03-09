#include "main.h"

/**
 * _strlen_recursion - string length or size
 * @s: pointer to string params
 * Return: size of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * examine_pal - examine if a string is a palindrome
 * @s: string to bring back
 * @len: situate
 * Return: 0
 */

int examine_pal(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}

	if (*s == *(s + len))
	{
		return (examine_pal(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (examine_pal(s, len - 1));
}
