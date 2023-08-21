#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: the string to change
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, x = 0;
	unsigned int xy = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		xy = (xy * 10) + (s[x] - '0');
		x++;
	}
	xy *= sign;
	return (xy);
}
