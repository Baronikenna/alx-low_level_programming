#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: Height of the grid.
 * This function takes a 2D grid and its height as parameters and frees t
 * allocated for each row and the array of row pointers.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
