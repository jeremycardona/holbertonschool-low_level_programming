#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create anew dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *news;

	news = malloc(sizeof(*news));
	if (!news)
		return (NULL);
	news->name = name;
	news->age = age;
	news->owner = owner;
	return (news);
}
