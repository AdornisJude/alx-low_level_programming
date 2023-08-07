#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees an array of integers.
 * @grid: The 2D array of integers to be freed.
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
