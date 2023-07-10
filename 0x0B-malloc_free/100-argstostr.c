#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate arguments
 * @ac: arguments count
 * @av: double pointer to array of strings
 * Return: Null if fail, otherwise a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *c;
	char *f;
	int x;
	int y;
	int sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, sum = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++, sum++)
			;
		sum++;
	}
	sum++;

	c = malloc(sum * sizeof(char));
	if (c == NULL)
		return (NULL);

	f = c;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*c = av[x][y];
			c++;
		}
		*c = '\n';
		c++;
	}

	return (f);
}
