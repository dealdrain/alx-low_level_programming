#include "main.h"


/**
 * _strcmp - Compares two strings
 * @s1: string
 * @s2: string
 * Return: (0) if match, (-) if s1 < s2, (+) int if s2 > s2
 **/

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
