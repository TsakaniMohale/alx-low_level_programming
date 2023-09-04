#include <stdlib.h>
#include "main.h"

/**
 *free_grid - Function that frees a 2 dimensional grid.
 *@grid: Double pointer to the grid
 *@height: Total rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
