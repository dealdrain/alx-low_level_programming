#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: source
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int prev = 0;
	int x, y;

	x = 0;
	y = 0;

	while (*(s + x) != '\0')
	{
		y = 0;
		prev = count;
		while (*(accept + y) != '\0')
		{
			if (*(s + x) == *(accept + y))
			{
				count++;
			}
			y++;
		}
		if (prev == count)
		{
			break;
		}
		x++;
	}

	return (count);
}
