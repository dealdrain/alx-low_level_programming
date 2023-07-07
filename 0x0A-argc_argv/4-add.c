#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Print sum of argument + numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int x;
	unsigned int y, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			c = argv[x];

			for (y = 0; y < strlen(c); y++)
			{
				if (c[y] < 48 || c[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

