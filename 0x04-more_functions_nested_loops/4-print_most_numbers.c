#include "main.h"

/**
 * print_most_numbers -print numbers from zero to nine except two and four
 * Desc - You can only use _putchar twice in your code
 *
 */

void print_most_numbers(void)

{
	int a;
	a = 0;
	
	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar (a + '0');
		a++;
	}
	_putchar('\n');
}
