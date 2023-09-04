#include "main.h"
#include "stdlib.h"

/**
 *alloc_grid - Function that returns a pointer to a 2 dimensional array.
 *@width: Coloumn segments.
 *@height: Raws.
 *Return: NULL pointer or grid pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for ( ; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] ==  NULL)
		{
			for ( ; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
