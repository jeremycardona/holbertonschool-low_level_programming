#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogs memory
 * Description: Free memory space allocated dynamically
 * @d: struct of dog type
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
	else if (d->name)
		free(d->name);
	else if (d->owner)
		free(d->owner);
	else
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
