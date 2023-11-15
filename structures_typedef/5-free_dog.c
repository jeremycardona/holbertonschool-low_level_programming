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
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
}
