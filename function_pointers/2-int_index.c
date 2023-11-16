#include <stdlib.h>
/**
 * int_index - search for an integer
 * Description: search for an integer
 * Return: index or -1 if fails
 * @array: array of ints
 * @size: array size
 * @cmp: function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
