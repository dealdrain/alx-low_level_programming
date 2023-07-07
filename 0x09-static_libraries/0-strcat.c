#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: destination string
  * @src: source string
  *
  * Return: the final char
  */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int n;

	while (dest[x])
	{
		x++;
	}

	for (n = 0; src[n] != 0; n++)
	{
		dest[x] = src[n];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
