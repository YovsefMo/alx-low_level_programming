#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees alloc_grid
 * @grid: rows of mtrx
 * @height: columns
 * Return: pointer to 2d in array || NULL
 */
void free_grid(int **grid, int height)
{
	int x;
	int *p;

	for (x = 0 ; x < height ; x++)
	{
		p = grid[x];
		free(p);
	}
	free(grid);
}
