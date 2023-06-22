#include <stdio.h>
#include "main.h"

/**
 * main- main program that prints the numbers from 0 to 100
 * Desc: multiples of 3 and 5 print Fizz Buzz respectively
 * multiples of both 3 and 5 prints FizzBuzz
 * return: 0
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
