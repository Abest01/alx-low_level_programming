#include "main.h"

/**
* free_grid - Function that frees a 2D grid
* @grid: The width
* @height: The height
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
