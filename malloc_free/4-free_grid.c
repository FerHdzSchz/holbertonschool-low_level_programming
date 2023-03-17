#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free grid memory
 * @grid:  grid to clean
 * @height: num of rows from grid
 *
*/

void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
