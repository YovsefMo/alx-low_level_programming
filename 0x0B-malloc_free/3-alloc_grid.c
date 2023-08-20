#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - pointer to a 2d array of ints
 * @width: y
 * @height: x
 * Return: NULL or 2d array
 */
int **alloc_grid(int width, int height)
{
	int x, y, z;
	int *p;
	int **mtrx;

	if (width <= 0 || height <= 0)
		return (NULL);

	mtrx = (int **)malloc(height * sizeof(int *));
	
	if (mtrx == NULL)
		return (NULL);

	for (x = 0 ; x < height ; x++)
	{
		*(mtrx + x) = (int *)malloc(width * sizeof(int));

		if (*(mtrx + x) == NULL)
		{
			for (x = 0 ; x < height ; x++)
			{
				p = mtrx[x];
				free(p);
			}
			free(mtrx);
			return (NULL);
		}
	}

	for (y = 0 ; y < height ; y++)
	{
		for (z = 0 ; z < width ; z++)
		{
			mtrx[y][z] = 0;
		}
	}

	return (mtrx);
}
