#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate ram for  array
 * @nmemb: elements number
 * @size: number of bytes
 * Return: a pointer to the allocated ram for the str
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int c;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);

	b = a;
	for (c = 0; c < nmemb * size; c++)
		b[c] = 0;
	return (a);
}
