#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the mem space allocated to grid.
 * @grid: the grid input.
 * @height: its height.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	while (height != NULL)
	{
		free(grid[--height]);
	}
	free(grid);
}
