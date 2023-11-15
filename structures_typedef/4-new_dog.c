#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

dog_t *create_dog(dog_t *);
char *create_dog_name(dog_t *, int);
char *create_dog_owner(dog_t *, int);
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
	dog_t *news, *doggy;
	int l_name = 0, l_owner = 0;

	if (name)
		l_name = strlen(name);
	if (owner)
		l_owner = strlen(owner);
	if (l_name + l_owner == 0)
		return (NULL);

	news = NULL;
	news = create_dog(news);
	if (!news)
		return (NULL);
	create_dog_name(news, l_name);
	if (!(news->name))
		return (NULL);
	create_dog_owner(news, l_owner);
	if (!(news->owner))
		return (NULL);
	doggy = news;
	doggy->age = age;
	doggy->name = strcpy(news->name, name);
	doggy->owner = strcpy(news->name, owner);
	return (news);
}
/**
 * create_dog - create memory for struct
 * Description: function that allocates memory for struct
 * pointer
 * Return: pointer
 * @dog: struct of type dog_t
 */
dog_t *create_dog(dog_t *dog)
{
	dog = malloc(sizeof(dog_t));
	return (dog);
}
/**
 * create_dog_name - create memory for dog name
 * Description: function that allocated memory for struct
 * and its pointers elements
 * Return: pointer
 * @dog: struct of type dog_t
 * @length: space to allocate
 */
char *create_dog_name(dog_t *dog, int length)
{
	dog->name = malloc(sizeof(length + 1));
	return (dog->name);
}
/**
 * create_dog_owner - create memory for dog owner
 * Description: function that allocated memory for struct
 * and its pointers elements
 * Return: pointer
 * @dog: struct of type dog_t
 * @length: space to allocate
 */
char *create_dog_owner(dog_t *dog, int length)
{
	dog->owner = malloc(sizeof(length + 1));
	return (dog->owner);
}
