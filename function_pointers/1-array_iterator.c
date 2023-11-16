#include <stddef.h>
/**
 * array_iterator - execute a function given as a parameter
 * Description: func that executes a function given as a parameter
 * on eachelement of an array.
 * @array: array of int
 * @size: size of the array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
