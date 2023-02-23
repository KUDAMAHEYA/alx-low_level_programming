#include "main.h"

/**
  * print_line - function that draws a straight line in the terminal
  * @n: The number of lines to draw
  *
  * Return: non
  */
void print_line(int n)
{
	int k;

	if (k <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
