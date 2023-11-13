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

	d->name = name;
	d->age = age;
	d->owner = owner;
}
