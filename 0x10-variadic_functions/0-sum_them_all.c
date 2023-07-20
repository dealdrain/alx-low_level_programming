#include "variadic_functions.h"

/**
 * sum_them_all - return sum of parameters
 * @n: additional parameters count
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	va_list y;
	int z;

	va_start(y, n);
	for (x = 0, z = 0; x < n; x++)
		z += va_arg(y, int);

	va_end(y);

	return (z);
}
