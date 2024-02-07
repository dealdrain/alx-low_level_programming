#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	size_t curr = prev - step;

	printf("Value found between indexes [%lu] and [%lu]\n", curr, prev);

	prev = (prev >= size) ? size - 1 : prev;

	while (curr <= prev)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		if (array[curr] == value)
			return (curr);
		curr++;
	}

	return (-1);
}
