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
	int l_name = 0, l_owner = 0;

	if (name)
		l_name = strlen(name);
	if (owner)
		l_owner = strlen(owner);
	news = malloc(sizeof(*news));
	if (!news)
	{
		free(news);
		return (NULL);
	}
	news->name = malloc(l_name);
	if (!news->name)
	{
		free(news->name);
		return (NULL);
	}
	news->owner = malloc(l_owner);
	if (!news->owner)
	{
		free(news->owner);
		return (NULL);
	}
	n = malloc(sizeof(*n) * l_name + 1);
	if (!n)
	{
		free(n);
		return (NULL);
	}
	o = malloc(sizeof(*o) * l_owner + 1);
	if (!o)
	{
		free(o);
		return (NULL);
	}
	news->age = age;
	news->name = strcpy(n, name);
	news->owner = strcpy(o, owner);
	return (news);
}
