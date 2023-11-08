#include <stdlib.h>
/**
 * free_grid - free a 2d array
 * Description: free a 2d array created by alloc_grid.c
 * @grid: 2d array
 * @height: rows of the array
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);
	free(grid);
}
