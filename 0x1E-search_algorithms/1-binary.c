#include "search_algos.h"

/**
 * binary_search - conducts search
 * @array: pointer to int arr
 * @size: size of the arr
 * @value: value to search
 * Return: index of value found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d%s", array[i], i == right ? "\n" : ", ");

		if (array[mid] == value)

			return (mid);

		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
