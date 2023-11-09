#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create an array of ints
 * Description: create an array of ints starting from min
 * Return: pointer to newly created array
 * @min: starting from
 * @max: max value to add
 */
int min_v(int, int);
int count_size(int, int);
int *array_range(int min, int max)
{
	int *array;
	int count, i, t_min = min;
	int v = min_v(min, max);
	
	if (!v)
		return (NULL);
	
	count = count_size(min, max);
	array = malloc(count * sizeof(*array));
	
	if (!array)
	{
		free(array);
		return (NULL);
	}
	for (i = 0 ; i <= max; i++)
	{
		array[i] = t_min;
		t_min++;
	}
	return (array);
}
/**
 * min_v - check if i is less than j
 * Description: check if i is less than j.
 * Return: 1 if i is less than j, 0 otherwise
 * @i: first value
 * @j: scond value
 */
int min_v(int i, int j)
{
	if (i < j)
		return (1);
	return (0);
}
/**
 * count_size - count the size to be allocated in memory
 * Description: count the size to be allocated in memory by
 * iterating starting from min to max
 * Return: size to be allocated
 * @min: start from
 * @max: finish
 */
int count_size(int min, int max)
{
	int c = min;
	
	if (min_v(min,max))
	{		
		for (; c <= max; c++)
		{
		}
		return (c + 1);
	}
	return (0);
}
