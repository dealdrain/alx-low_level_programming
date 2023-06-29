#include "main.h"

/**
 * rot13 - rotate characters..
 * @j: input string
 * Desc: You can only use two loops in your code
 * Return: rotated string.
 */

char *rot13(char *j)
{
	int x, y;

	char bk[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char bkk[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; j[x] != '\0'; ++x)
	{
		for (y = 0; bk[y] != '\0' ; y++)
		{
			if (j[x] == bk[y])
			{
				j[x] = bkk[y];
				break;
			}
		}
	}
	j[x] = '\0';
	return (j);
}
