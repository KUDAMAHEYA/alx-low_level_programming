#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @y: string value
 *
 * Return: y
 */
char *rot13(char *y)
{
	int d, e;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (d = 0; y[d] != '\0'; d++)
	{
		for (e = 0; x[e] != '\0'; e++)
		{
			if (y[d] == x[e])
			{
				y[d] = z[e];
				break;
			}
		}
	}

	return (y);
}
