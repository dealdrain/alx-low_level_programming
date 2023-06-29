#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase of string to uppercase
 * @s: string
 * Return: string array
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}

	return (s);
}
