#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: input string
 *
 * Return: non
 *
 */

void puts_half(char *str)
{
	int x = 0;
	int n;

	while (str[x] != '\0')
		x++;

	if (x % 2 != 0)
		n = (x + 1) / 2;
	else
	        n = x / 2;

	for (; str[n] != '\0'; n++)
		_putchar(str[n]);

	_putchar('\n');
