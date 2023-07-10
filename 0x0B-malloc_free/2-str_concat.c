#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenate two strings
  * @s1: first string
  * @s2: second string
  * Return: concatenated strings
  */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;

	while (s2[b])
		b++;

	x = a + b;
	s = malloc((sizeof(char) * x) + 1);

	if (s == NULL)
		return (NULL);

	b = 0;

	while (c < x)
	{
		if (c <= a)
			s[c] = s1[c];

		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}

		c++;
	}

	s[c] = '\0';
	return (s);
}
