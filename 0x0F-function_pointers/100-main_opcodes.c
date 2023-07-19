#include<stdio.h>
#include<stdlib.h>

/**
 * main- Entry point
 *@argc: arg count
 *@argv: str length
* Desc: .........
*
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int a;
	int y;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < y; a++)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < y - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
