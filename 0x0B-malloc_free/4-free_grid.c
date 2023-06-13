#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2D array
 * @grid: Input of 2D array of ints to free
 * @height: Height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
