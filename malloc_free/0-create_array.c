#include <stdlib.h>
/**
 * create_array - create an array of chars
 * Description: Create an array of chars and initialize
 * it with a specific char.
 * Return: pointer to the array or nul if it fails
 * @size: size
 * @c: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (!size)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	while (size--)
	{
		if (arr)
			arr[i] = c;
		i++;
	}
	return (arr);
}
