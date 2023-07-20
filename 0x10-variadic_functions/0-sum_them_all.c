#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of parameters
 * @n: additional parameters count
 * Return: total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int a = 0;
	int total = 0;

	if (n != 0)
	{
		va_start(arg, n);

		while (a < n)
		{
			total += va_arg(arg, int);
			a++;
		}

		va_end(arg);
		return (total);
	}

	return (0);
}
