#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: the main string
 * @needle: The substring
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{
	int a = 0;
	int b = 0;
	int ef = 0;
	int ed = 0;

	while (needle[ef] != '\0')
	{
		ef++;
	}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; b < ef && haystack[a] == needle[b]; b++, a++)
		{
			if (b == 0)
			{
				ed = a;
			}
			if (b == ef - 1)
			{
				return (haystack + ed);
			}
		}
	}
	return (0);
}
