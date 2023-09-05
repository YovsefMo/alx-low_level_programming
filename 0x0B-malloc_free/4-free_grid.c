#include "main.h"
/**
 * free_grid - fees a 2d array
 * @grid: 2d array input
 * @height: rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int counter;

	if (grid == NULL)
		free(grid);

	for (counter = 0 ; counter < height ; counter++)
		free(grid[counter]);
	free(grid);
}
