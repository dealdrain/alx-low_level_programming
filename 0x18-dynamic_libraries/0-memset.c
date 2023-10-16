#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the buffer rray
 * @b: the constant byte
 * @n: the number of bytes to be filled
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
