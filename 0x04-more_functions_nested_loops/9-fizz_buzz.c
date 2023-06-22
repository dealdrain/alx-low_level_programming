#include <stdio.h>
#include "main.h"

/**
 * main - main block, prints fizz buzz and numbers from 1 to 100
 * Description: Multiples of 3 gets Fizz. multiples of 5 must print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int x;

	x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");

		else
			printf("%d", x);
		if (x != 100)
			printf(" ");
		x++;
	}
	printf("\n");
	return (0);
}
