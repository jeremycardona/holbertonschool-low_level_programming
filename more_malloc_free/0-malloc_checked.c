#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * Description: allocate memory, if it fails terminate process.
 * @b: size to allocate
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		free(p);
		exit(98);
	}
	return (p);
}
