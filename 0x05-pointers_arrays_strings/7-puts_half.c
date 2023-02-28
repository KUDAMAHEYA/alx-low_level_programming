#include "main.h"

/**
 * puts_half - print half of a string.
 *@str: string to use.
 */

void puts_half(char *str)
{
	int leng, n, i;

	for (leng = 0; str[leng] != '\0'; leng++)
	{
	}
	n = (leng - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
