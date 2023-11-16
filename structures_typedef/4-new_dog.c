#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int length_name(char *);
int length_owner(char *);
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
	int l_name = length_name(name), l_owner = length_owner(owner);

	if (l_name + l_owner <= 0)
		return (NULL);
	news = malloc(sizeof(dog_t));
	if (news == NULL)
	{
		return (NULL);
	}
	news->name = malloc(l_name + 1);
	if (!(news->name))
	{
		free(news);
		return (NULL);
	}
	news->owner = malloc(l_owner + 1);
	if (!(news->owner))
	{
		free(news->name);
		free(news);
		return (NULL);
	}
	news->age = age;
	strcpy(news->name, name);
	strcpy(news->name, owner);
	return (news);
}
/**
 * length_name - getlength of string
 * Description:  s
 * Return: length
 * @name: string
 */
int length_name(char *name)
{
	if (name)
		return (strlen(name));
	return (0);
}
/**
 * length_owner - get lenth of string
 * Description: length
 * Return: length
 * @owner: string
 */
int length_owner(char *owner)
{
	if (owner)
		return (strlen(owner));
	return (0);
}
