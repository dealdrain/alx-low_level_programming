#include "main.h"

/**
 * print_line -  a function that draws a straight line
 * @n: is the number of times the character underscore should be printed
 * Return - empty next line
 */

void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar('_');

		x++;
	}
	_putchar('\n');
}
