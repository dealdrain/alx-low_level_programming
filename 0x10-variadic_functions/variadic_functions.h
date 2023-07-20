#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void prichar(va_list z);
void priint(va_list z);
void priflo(va_list z);
void pristr(va_list z);
int _putchar(char c);

/**
 * struct checker - Struct format_types
 * @f: function
 * @type: type
 */

typedef struct checker
{
char *type;
void (*f)();
} checker;

#endif
