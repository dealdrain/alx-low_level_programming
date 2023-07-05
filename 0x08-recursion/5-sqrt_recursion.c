#include "main.h"

/**
 * check_int - checks an integer at random
 * @square: a square integer
 * @x: the int
 * Return: 1
 */

int check_int(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (check_int(square, x - 1));
	else if (x < square / x)
		return (check_int(square, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - will return natural square root of integer
 * @n: An integer
 * Return: integer - square root, else, return -1
 */

int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_int(n, start));
}
