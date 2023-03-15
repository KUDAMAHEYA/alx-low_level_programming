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

	if (height <= 0 || width <= 0)
		return (NULL);

	mky = (int **) malloc(sizeof(int *) * height);

	if (mky == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mky[i] = (int *) malloc(sizeof(int) * width);
		if (mky[i] == NULL)
		{
			free(mky);
			for (j = 0; j <= i; j++)
				free(mky[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mky[i][j] = 0;
		}
	}
	return (mky);
