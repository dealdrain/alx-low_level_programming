#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @s1: first string
  * @s2: second string
  * @n: length of str
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int c = 0;
	unsigned int b = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[c])
		c++;
	if (n >= c)
		b = x + c;
	else
		b = x + n;
	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
		return (NULL);
	c = 0;
	while (y < b)
	{
		if (y <= x)
			str[y] = s1[y];
		if (y >= x)
		{
			str[y] = s2[c];
			c++;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
