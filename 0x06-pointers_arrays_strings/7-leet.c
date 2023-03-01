#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @n: string value
 * Return: n
 */
char *leet(char *n)
{
	int x;
	int y;
	int m;

	char k[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	x = 0;
	while (n[x] != '\0')
	{
		y = 0;
		m = 0;
		while (k[y] != '\0')
		{
			if (n[x] == k[y])
			{
				m = y;
				n[x] = e[m];
			}
			y++;
		}
		x++;
	}
	return (n);
}
