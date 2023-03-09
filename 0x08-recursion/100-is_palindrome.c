#include "main.h"

/**
 * check - Checker for the palindrome
 * @s: String
 * @x: input
 * @y: input
 * @z: input
 * Return: 0 or 1
 */

int check(char *s, int x, int y, int z)
{
	if ((x == y && z != 0) || (x == y + 1 && z == 0))
		return (1);
	else if (s[x] != s[y])
		return (0);
	else
		return (check(s, x+ 1, y - 1, z));
}

/**
 * 1st_pal - the palindrome
 * @s: Pointer the string
 * Return: 0
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int y = _strlen_recursion(s);

	return (check(s, 0, end - 1, end % 2));
}
