#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: arguments array
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int x;

	x = 0;
	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
