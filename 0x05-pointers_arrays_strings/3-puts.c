#include "main.h"

/*
 * _puts - printing a string to stdout
 * @str: char array string
 *
 * Desc: Another _putchar baby
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
