#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2-dimensional array.
 * @grid: Pointer to the 2-dimensional array.
 * @height: Number of rows in the array.
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
