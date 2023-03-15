#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **mky;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	mky = malloc(height * sizeof(int *));
	if (mky == NULL)
	{
		free(mky);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mky[i] = malloc(width * sizeof(int));
		if (mky[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(mky[i]);
			free(mky);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			mky[i][j] = 0;

	return (mky);
}
