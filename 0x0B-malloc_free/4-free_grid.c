#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid created
 * by alloc_grid function
 *
 * @grid: pointer to the 2-dimensional grid
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
