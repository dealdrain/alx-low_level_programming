#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if match, negative if s1 < s2, and positive if s2 > s1
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)

	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}

	return (0);
}
