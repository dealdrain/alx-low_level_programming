#include "search_algos.h"

/**
 * _binary_search - searches using binary search
 * @array: pointer to the arr
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (size_t i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches using exponential search
 * @array: pointer to the arr
 * @size: size of the arr
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (_binary_search(array, i / 2, right, value));
}
