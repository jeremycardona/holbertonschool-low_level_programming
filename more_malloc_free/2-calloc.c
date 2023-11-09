#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * Description: allocate memory for an array of nmemb elements
 * of size bytes each.
 * Return: a pointer to the allocated memory
 * @nmemb: array of nmemb elements
 * @size: bytes to create
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	if (arr)
		memset(arr, 0, size * nmemb);
	return (arr);
}
