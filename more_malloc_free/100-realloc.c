#include <stdlib.h>
/* prototypes */
void *_size_check(void *ptr, unsigned int, unsigned int);
/**
 * _realloc - reallocate a memory block
 * Description: function that reallocates a memory block using
 * malloc and free.
 * Return: if new_size == old_size return ptr
 * if new_size == 0 and ptr != null, return null
 * else return ptr
 * @ptr: pointer to allocate memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;

	temp = ptr;
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	else
	{
		ptr = _size_check(ptr, old_size, new_size);
		if (new_size > old_size)
			return (ptr);
		if (new_size == old_size)
			return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr = temp;
	return (ptr);
}
/**
 * _size_check - verify old and new size
 * Description: function that compares sizes, to allocate new
 * space or nah
 * Return: either ptr or nil
 * @ptr: pointer
 * @old_size: previous size allocated
 * @new_size: new size to allocate
 */
void *_size_check(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	return (ptr);
}
