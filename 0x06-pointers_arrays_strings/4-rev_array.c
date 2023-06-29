#include "main.h"

/**
 * reverse_array - reverses the elements of an int array
 * @a: is the elements of the array
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z = n / 2;

	for ((x = 0); (x < z); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
