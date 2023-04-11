#include <stdlib.h>

/**
 * free_grid - a function that frees a two dimensional grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: return nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
