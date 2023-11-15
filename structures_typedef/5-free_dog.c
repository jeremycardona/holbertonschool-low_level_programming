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
	else
		exit(0);
	if (d->name)
		free(d->name);
	else
		exit(0);
	if (d->owner)
		free(d->owner);
	else
		exit(0);
}
