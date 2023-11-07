#include <stdlib.h>
/**
 * alloc_grid - func that returns a pointer to a 2d array of int
 * Description: return a pointer to a 2d array, all elements ini 0
 * Return: pointer to 2d array, null on failure
 * @width: grid width -> cols
 * @height: grid height -> rows
 */
int **alloc_grid(int width, int height)
{
	int s_int, r, c;
	int **grid;

	s_int = sizeof(int);

	grid = (int **)malloc(height * s_int);
	for (c = 0; c < width; c++)
		grid[c] = (int *)malloc(width * s_int);
	if (grid)
	{
		for (r = 0; r < height; r++)
		{
			for (c = 0; c < width; c++)
			{
				grid[r][c] = 0;
			}
		}
		return (grid);
	}
	return (NULL);
}
