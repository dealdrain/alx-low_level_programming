#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers(min and max)
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *x;
	int b;

	if (min > max)
		return (NULL);

	x = malloc((max - min + 1) * sizeof(*x));
	if (x == NULL)
		return (NULL);

	for (b = 0; min <= max; b++, min++)
		x[b] = min;

	return (x);
}
