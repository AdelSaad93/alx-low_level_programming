#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * Return: No return value (void).
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

