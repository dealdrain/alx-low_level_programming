#include "main.h"

/**
 * print_numbers - print numbers zero to nine
 * Return: zero to nine followed by a new line
 *
 */

void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)

	{
		_putchar (b + '0');
	}
	_putchar('\n');
}
