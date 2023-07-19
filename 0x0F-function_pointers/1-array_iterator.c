#include "function_pointers.h"

/**
 * array_iterator - executes a function on elements of array
 * @array: array of int
 * @size: array size
 * @action: pointer of func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
