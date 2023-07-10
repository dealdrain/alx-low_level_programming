#include <stdlib.h>
#include "main.h"
/**
 * count_word - function to count number of words.
 * @s: the string to evaluate
 * Return: the number of words
 */

int count_word(char *s)
{
	int a = 0;
	int x;
	int y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			y++;
		}
	}

	return (y);
}
/**
 * strtow - split a string into bits
 * @str: the source string
 * Return: pointer to an array or NULL if failed
 */
char **strtow(char *str)
{
	char **m;
	char p;
	int g;
	int h = 0;
	int j = 0;
	int r;
	int q = 0;
	int beg;
	int cut;

	while (*(str + j))
		j++;
	r = count_word(str);
	if (r == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (r + 1));
	if (m == NULL)
		return (NULL);
	for (g = 0; g <= j; g++)
	{
		if (str[g] == ' ' || str[g] == '\0')
		{
			if (q)
			{
				cut = g;
				p = (char **) malloc(sizeof(char) * (q + 1));
				if (p == NULL)
					return (NULL);
				while (beg < cut)
					*p++ = str[beg++];
				*p = '\0';
				m[h] = p - q;
				h++;
				q = 0;
			}
		}
		else if (q++ == 0)
			beg = g;
	}
	m[h] = NULL;
	return (m);
}
