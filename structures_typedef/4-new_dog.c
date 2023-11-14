#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *create_dog(dog_t *);
char *create_dog_name(dog_t *);
char *create_dog_owner(dog_t *);
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

	n = malloc(l_name + 1);
	if (!n)
	{
		free(n);
		return (NULL);
	}
	o = malloc(l_owner + 1);
	if (!o)
	{
		free(o);
		return (NULL);
	}
	news = malloc(sizeof(dog_t));
	if (!news)
	{
		free(news);
		return (NULL);
	}
	if (create_dog(news))
		news = create_dog(news);
	else
		return (NULL);
	if (create_dog_owner(news))
		news->owner = create_dog_owner(news);
	else
		return (NULL);
	if (create_dog_name(news))
		news->name = create_dog_name(news);
	else
		return (NULL);
	if (news)
	{
		news->age = age;
		news->name = strcpy(n, name);
		news->owner = strcpy(o, owner);
		return (news);
	}
	free(news->owner);
	free(news->name);
	free(news);
	return (NULL);
}
/**
 * create_dog - create memory for struct
 * Description: function that allocates memory for struct
 * pointer
 * Return: pointer or null
 * @dog: struct of type dog_t
 */
dog_t *create_dog(dog_t *dog)
{
	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}
	return (dog);
}
/**
 * create_dog_name - create memory for dog name
 * Description: function that allocated memory for struct
 * and its pointers elements
 * Return: pointer or null
 * @dog: struct of type dog_t
 */
char *create_dog_name(dog_t *dog)
{
	dog->name = malloc(sizeof(char *));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	return (dog->name);
}
/**
 * create_dog_owner - create memory for dog owner
 * Description: function that allocated memory for struct
 * and its pointers elements
 * Return: pointer or null
 * @dog: struct of type dog_t
 */
char *create_dog_owner(dog_t *dog)
{
	dog->owner = malloc(sizeof(char *));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	return (dog->owner);
}
