#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a struct dog
 * Description: print a struct dog with a required format
 * @d: struct type dog
 */

void print_dog(struct dog *d)
{
	struct dog *t;

	t = d;
	if (!t)
		return;
	if (!t->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", t->name);
	if (!t->age)
		printf("Age: %f\n", t->age);
	else
		printf("Age: %f\n", t->age);
	if (!t->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", t->owner);
}
