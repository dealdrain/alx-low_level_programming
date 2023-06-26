#include "main.h"

/**
 * rev_string - reversing a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int x, y, p;
	char h;

	for (x = 0; s[x] != '\0'; x++)
		;

	p = x;
	for (x--, y = 0; y < p / 2; x--, y++)
	{
		h = s[y];
		s[y] = s[x];
		s[x] = h;
	}
}
