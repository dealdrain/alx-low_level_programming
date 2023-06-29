#include "main.h"

/**
 * rot13 - rotate characters..
 * @s: string
 * Desc: You can only use two loops in your code
 * Return: rotated string.
 */

char *rot13(char *s)
{
	int x;
	char pile[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char pile2[] = "nopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		if ((s[x] > 64 && s[x] < 91) || (s[x] > 96 && s[x] < 123))
		{
			s[x] = (s[x] - 65 > 25) ?
				pile2[s[x] - 97] : pile[s[x] - 65];
		}
	}
	return (s);
}
