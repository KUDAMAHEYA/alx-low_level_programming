#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: measured string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
