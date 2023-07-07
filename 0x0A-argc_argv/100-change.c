#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, and array of strings
 * Return: 1 if error, else 0
 */

int main(int argc, char *argv[])
{
	int sum, num;
	unsigned int x;
	char *y;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &y, 10);
	num = 0;

	if (!*y)
	{
		while (sum > 1)
		{
			for (x = 0; x < sizeof(cents[x]); x++)
			{
				if (sum >= cents[x])
				{
					num += sum / cents[x];
					sum = sum % cents[x];
				}
			}
		}
		if (sum == 1)
			num++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", num);
	return (0);
}
