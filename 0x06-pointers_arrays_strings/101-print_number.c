#include "main.h"


/**
 * print_number - Write a function that prints an integer with putchar
 * @n: The number to print
 *
 *
 * Return 0;
 */


void print_number(int n)
{
	unsigned int a, b = n;
	int c = 1;

	if (n < 0)
	{
		_putchar('-');
		b = n * -1;
	}
	a = b;
	while (a > 9)
	{
		c *= 10;
		a = a / 10;
	}
	while (c >= 1)
	{
		a = b % c;
		b /= c;
		_putchar(b + '0');
		b = a;
		c /= 10;
	}
}
