#ifndef VAR_FUNC_
#define VAR_FUNC_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void prichar(va_list z);
void priint(va_list z);
void priflo(va_list z);
void pristr(va_list z);

typedef struct checker
{

char *type;
void (*f)();
} checker;


#endif
