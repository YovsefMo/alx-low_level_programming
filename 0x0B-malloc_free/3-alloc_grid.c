#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: columns
 * @height: rows
 * Return: NULL or pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (x = 0 ; x < height ; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			free (grid[x]);
			free (grid);

			return (NULL);
		}
		for (y = 0 ; y < width ; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
