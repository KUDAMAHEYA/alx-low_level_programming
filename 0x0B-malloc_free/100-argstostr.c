#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *mky;
	int c, i, j, ia;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	mky = malloc((c + 1) * sizeof(char));

	if (mky == NULL)
	{
		free(mky);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			mky[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			mky[ia] = av[i][j];
	}
	mky[ia] = '\0';

	return (mky);
}
