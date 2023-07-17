#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner name
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogg;
	int a;
	int b;
	int c;
	char *x, *y;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
		return (NULL);

	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;

	x = malloc(sizeof(char) * a + 1);
	if (x == NULL)
	{
		free(dogg);
		return (NULL);
	}
	y = malloc(sizeof(char) * b + 1);
	if (y == NULL)
	{
		free(x);
		free(dogg);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		x[c] = name[c];
	for (c = 0; c <= b; c++)
		y[c] = owner[c];

	dogg->name = x;
	dogg->age = age;
	dogg->owner = y;

	return (dogg);
}
