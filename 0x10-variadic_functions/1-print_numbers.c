#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: seperation between numbers
 * @n: count of arguments to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list z;

	va_start(z, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(z, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(z);
}
