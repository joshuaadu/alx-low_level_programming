#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a pointer to a 2 dimensional array of integers
 *
 * @width: number of colums in the array
 * @height: number of rows in the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 * NULL on failure
 * If width or height is 0 or negative, return NULL
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* If width or height is 0 or negative, return NULL */
	if (width < 1 || height < 1)
		return (NULL);

	/* Set dynamic allocations for the rows */
	grid = malloc(height * sizeof(int *));

	/* if insufficient memory available return NULL */
	if (grid == NULL)
		return (NULL);

	/* Add columns to each row */
	for (i = 0; i < height; i++)
	{
		/* Set memory allocations for columns */
		grid[i] = malloc(width * sizeof(int));
		/* if insufficient memory available return NULL */
		if (grid[i] == NULL)
		{
			/* free up all previously set memory allocations*/
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	/* initialize all columns to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

