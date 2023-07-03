#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the matching string
 * Return: Pointer to the byte that matches the bytes in `accept`
 * Return null if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *c;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c = &s[a];
				return (c);
			}
			b++;
		}
		a++;
	}

	return (0);
}
