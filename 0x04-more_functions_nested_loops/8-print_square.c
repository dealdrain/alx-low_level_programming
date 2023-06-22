#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: is the size of the square
 * Return - to a new line
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
