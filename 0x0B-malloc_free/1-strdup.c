#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc
 * @str: the string to duplicate
 * Return: A Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *x;
	int y, z;

	if (str == NULL)
		return (NULL);

	for (y = 0; str[y] != '\0'; y++)
		;

	x = malloc(y * sizeof(*x) + 1);
	if (x == NULL)
		return (NULL);

	for (z = 0; z < y; z++)
		x[z] = str[z];
	x[z] = '\0';

	return (x);
}
