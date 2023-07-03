#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination array
 * @src: source array
 * @n: the number of elements set to copy
 * Return: the pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
