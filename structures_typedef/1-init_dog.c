#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * Description: initialize a struct dog
 * @d: struct type
 * @name: string
 * @age: float
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *temp;
       
	temp = d;

	temp->name = name;
	temp->age = age;
	temp->owner = owner;
}
