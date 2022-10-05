#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to a 2 dimensional grid
 * @height: number of rows in grid
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	if (grid && height)
	{
		while (--height >= 0)
			free(grid[height]);
		free(grid);
	}
}
