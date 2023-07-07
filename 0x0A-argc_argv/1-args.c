#include "main.h"
#include <stdio.h>

/**
 * main - print the num of args you passed to it
 * @argc: count of argument
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
