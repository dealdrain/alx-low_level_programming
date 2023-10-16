#include "main.h"


/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the initiating string
 * @n: number of elements to concatenate in
 * Return: ptr to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)

{
	int a, x;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (x = 0; src[x] != '\0' && n > 0; x++, n--, a++)
	{
		dest[a] = src[x];
	}
	return (dest);

}
