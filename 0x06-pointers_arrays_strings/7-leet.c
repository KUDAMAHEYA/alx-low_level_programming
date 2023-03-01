#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @n: string to code value
 * Return: n.
 */
char *leet(char *n)
{
	int x;
	int y;
	int m;

	char m1[] = "oOlLeEaAtT";
	char m2[] = "0011334477";

	x = 0;
	while (n[x] != '\0')
	{
		y = 0;
		k = 0;
		while (m1[y] != '\0')
		{
			if (n[x] == m1[y])
			{
				m = y;
				n[x] = m2[m];
			}
			y++;
		}
		x++;
	}
	return (n);
}
