#include "function_pointers.h"

/**
 * int_index - a function that searches for int
 * @array: array of int
 * @size: array size
 * @cmp: function pointer
 * Return: index of first element, else null
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);
}
