#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array
  * @size: size of the array
  * @c: char of the array
  *
  * Return: array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		p[x] = c;
	}

	return (p);
}
