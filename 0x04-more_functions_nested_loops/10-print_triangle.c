#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size:  the size of the triangle
 * return: 0
 */

void print_triangle(int size)
{
	int a, x, y;

	a = 0;
	x = size - 1;
	while (a < size)
	{
		x = size - 1 - a;
		y = a + 1;
		while (x > 0)
		{
			_putchar(' ');
			x--;
		}
		while (y > 0)
		{
			_putchar('#');
			y--;
		}
		_putchar('\n');
		a++;
	}

	if (size <= 0)
		_putchar('\n');
}
