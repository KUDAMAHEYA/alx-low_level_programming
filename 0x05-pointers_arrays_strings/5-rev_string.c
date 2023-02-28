#include "main.h"

/**
 * rev_string - fantion that reverses a string
 * @s: string that pointed by a ponter
 */

void rev_string(char *s)
{
	char xyz;
	int x, y, xy;

	y = 0;
	xy = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	xy = y - 1;

	for (x = 0; x < y / 2; x++)
	{
		xyz = s[x];
		s[x] = s[xy];
		s[xy--] = xyz;
	}
}
