#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string input
 */
void print_rev(char *s)
{
	int x, y, xy;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	xy = x;

	for (y = xy - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}
