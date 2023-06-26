#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints 'n' elements of an array of integers
  * @a: Array of integers
  * @n: Number of elements of the array to be printed
  * Desc : Separate numbers by a comma and space
  * Another _putchar task
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);

		if (p != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
