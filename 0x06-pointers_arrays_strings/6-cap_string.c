#include "main.h"
#include <stdio.h>

/**
  * cap_string - capitalizing strings
  * @s: string array
  *
  * Return: char
  */

char *cap_string(char *s)
{
	int x = 0, b;
	int y = 13;
	char z[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		b = 0;

		while (b < y)
		{
			if ((x == 0 || s[x - 1] == z[b]) && (s[x] >= 97 && s[x] <= 122))
				s[x] -= 32;

			b++;
		}

		x++;
	}

	return (s);
}

