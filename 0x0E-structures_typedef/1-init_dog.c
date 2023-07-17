#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable `struct dog`
 * @d: struct dog
 * @name: name string
 * @age: age int
 * @owner: dog owner string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
