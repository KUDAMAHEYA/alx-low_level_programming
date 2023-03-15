#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - a function that splits a string into words.
 * @str: string.
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **mky;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	mky = malloc((height + 1) * sizeof(char *));
	if (mky == NULL || height == 0)
	{
		free(mky);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				mky[i] = malloc((c - a1 + 2) * sizeof(char));
				if (mky[i] == NULL)
				{
					ch_free_grid(mky, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			mky[i][j] = str[a1];
		mky[i][j] = '\0';
	}
	mky[i] = NULL;
	return (mky);
}
