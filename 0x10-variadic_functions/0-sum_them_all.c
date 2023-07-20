#include "variadic_functions.h"

/**
 * sum_them_all - return sum of parameters
 * @n: additional parameters count
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;
	int total = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (a < n)
		{
			total += va_arg(args, int);
			a++;
		}

		va_end(args);
		return (total);
	}

	return (0);
}
