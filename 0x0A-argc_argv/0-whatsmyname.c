#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the file followed by a new line
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
