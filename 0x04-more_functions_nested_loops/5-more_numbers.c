#include "main.h"

/**
 * more_numbers - Write a function that prints ten times the numbers
 * Desc - from zero to fourteen
 * Return - New line
 */

void more_numbers(void)
{
	int x, y;

	x = 0;

	while (x < 10)
{
		y = 0;
		while (y < 15)
		{
			if (y > 9)
				_putchar(y / 10 + '0');

			_putchar(y % 10 + '0');
			y++;
		}
		x++;
		_putchar('\n');
	}
}
