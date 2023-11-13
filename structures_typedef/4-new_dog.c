#include "dog.h"
#include <stdlib.h>
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
	char *n, *o;
	float a;

	news = malloc(sizeof(*news));
	if (!news)
	{
		free(news->name);
		free(news->owner);
		free(news);
		return (NULL);
	}
	n = name;
	a = age;
	o = owner;
	news->name = n;
	news->age = a;
	news->owner = o;

	return (news);
}
