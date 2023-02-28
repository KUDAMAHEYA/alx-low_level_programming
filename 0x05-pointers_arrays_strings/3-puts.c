#include "main.h"

/**
 * _puts -  function that prints a string, followed
 * by a new line, to stdout
 * @str: pointer input string
 */
void _puts(char *str)
{
	int xy;

	for (xy = 0; str[xy] != '\0'; xy++)
	{
		_putchar(str[xy]);
	}
	_putchar('\n');
}
