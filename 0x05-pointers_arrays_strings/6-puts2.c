#include "main.h"

/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *@str: string to use the chars from
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
