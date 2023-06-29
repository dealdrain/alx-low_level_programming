#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: char string
 * Return: string `s`
 */


char *leet(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == 'a' || s[x] == 'A')
			s[x] = '4';
		if (s[x] == 'e' || s[x] == 'E')
			s[x] = '3';
		if (s[x] == 'o' || s[x] == 'O')
			s[x] = '0';
		if (s[x] == 't' || s[x] == 'T')
			s[x] = '7';
		if (s[x] == 'l' || s[x] == 'L')
			s[x] = '1';
	}

	return (s);
}
