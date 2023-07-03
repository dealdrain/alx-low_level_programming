#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int top = 0;
	int down = size - 1;
	int sumtop = 0;
	int sumdown = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sumtop += *(a + x * size + top);
		sumdown += *(a + x * size + down);
		top += 1;
		down -= 1;
	}
	printf("%d, %d\n", sumtop, sumdown);
}
