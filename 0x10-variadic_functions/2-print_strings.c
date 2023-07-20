#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print string
 * @separator: str to separate strs
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list z;
	char *st;

	va_start(z, n);
	for (a = 0; a < n; a++)
	{
		st = va_arg(z, char*);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(z);
}
