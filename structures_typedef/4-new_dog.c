#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create anew dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: function that creates a new dog
 * Return: dog_t pointer or null if it fails to allocate
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *news;

	news = malloc(sizeof(*news));
	if (!news)
	{
		free(news);
		return (NULL);
	}
	news->name = name;
	news->age = age;
	news->owner = owner;
	return (news);
}
