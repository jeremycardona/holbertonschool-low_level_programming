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
	char *n, *o;

	news = malloc(sizeof(*news));
	if (!news)
	{
		free(news);
		return (NULL);
	}
	n = malloc(sizeof(*n));
	if (!n)
	{
		free(n);
		return (NULL);
	}
	o = malloc(sizeof(*o));
	if (!o)
	{
		free(o);
		return (NULL);
	}
	n = name;
	o = owner;
	news->name = name;
	news->age = age;
	news->owner = owner;
	strcpy(n, name);
	strcpy(o, owner);

	return (news);
}
