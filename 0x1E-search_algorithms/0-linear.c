#include "search_algos.h"

/**
 * linear_search - linear search alg.
 * @array: pointer to array.
 * @size: array size
 * @value: value to search.
 * Return: index of the value.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
