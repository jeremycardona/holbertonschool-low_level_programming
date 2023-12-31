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
	int s_int, s_pint, r, c;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	s_int = sizeof(int);
	s_pint = sizeof(int *);

	grid = (int **)malloc(height * s_pint);
	if (!grid)
	{
		free(grid);
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		grid[r] = (int *)malloc(width * s_int);
		if (!grid[r])
		{
			for (; r >= 0; --r)
				free(grid[r]);
			free(grid);
			return (NULL);
		}
	}
	if (grid)
	{
		for (r = 0; r < height; r++)
		{
			for (c = 0; c < width; c++)
			{
				if (!grid[r])
					free(grid[r]);
				else
					grid[r][c] = 0;
			}
		}
		return (grid);
	}
	return (NULL);
}
