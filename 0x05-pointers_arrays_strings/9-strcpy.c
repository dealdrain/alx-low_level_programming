#include "main.h"

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  * Desc: a function that copies the string pointed to by src
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int w;

	for (w = 0; src[w] != '\0'; w++)
	{
		dest[w] = src[w];
	}

	dest[w++] = '\0';

	return (dest);
}
