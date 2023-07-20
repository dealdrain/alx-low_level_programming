#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * prichar - print char from va_list
 * @z: va_list to the func
 */
void prichar(va_list z)
{
	printf("%c", va_arg(z, int));
}

/**
 * pristr - print string from va_list
 * @z: va_list to the func
 */
void pristr(va_list z)
{
	char *gss;

	gss = va_arg(z, char *);
	if (gss == NULL)
		gss = "(nil)";
	printf("%s", gss);
}

/**
 * priflo - print float from va_list
 * @z: va_list to the func
 */
void priflo(va_list z)
{
	printf("%f", va_arg(z, double));
}

/**
 * priint - print int from va_list
 * @z: va_list to the func
 */
void priint(va_list z)
{
	printf("%d", va_arg(z, int));
}

/**
 * print_all - print everything (char, int, float, and string)
 * @format: format strings
 */
void print_all(const char * const format, ...)
{
	unsigned int a;
	unsigned int b;
	va_list args;
	char *h;

	checker storage[] = {
		{ "i", priint },
		{ "c", prichar },
		{ "s", pristr },
		{ "f", priflo }
	};

	a = 0;
	h = "";
	va_start(args, format);
	while (format != NULL && format[a / 4] != '\0')
	{
		b = a % 4;
		if (storage[b].type[0] == format[a / 4])
		{
			printf("%s", h);
			storage[b].f(args);
			h = ", ";
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
