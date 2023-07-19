#include "function_pointers.h"

/**
  * print_name - Prints name
  * @name: name
  * @f: A pointer to function
  *
  * Return: nothing always
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
