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
	int y;

	while (str[x] != '\0')
		x++;

	if (x % 2 != 0)
		y = (x + 1) / 2;
	else
		y = x / 2;

	for (; str[y] != '\0'; y++)
		_putchar(str[y]);

	_putchar('\n');
