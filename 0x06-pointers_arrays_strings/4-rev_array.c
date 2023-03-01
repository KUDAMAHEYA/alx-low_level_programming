#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array pointer
 * @n: array numbers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	x = 0;
	while (x < n)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
		x++;
	}
}
