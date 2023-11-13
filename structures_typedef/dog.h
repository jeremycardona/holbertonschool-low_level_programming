#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog type
 * @name: string containing dog name
 * @age: float for dog age
 * @owner: stringfor owner name
 * Description: struct for a dog type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *,float ,char *);
void print_dog(struct dog *d);
#endif
