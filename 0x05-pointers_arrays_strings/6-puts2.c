#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: string to be printed
  *
  * Return: void
  */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}

