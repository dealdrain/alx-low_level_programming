#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * return: 1 if true, 0 if false
 * printHexes - print hexes
 * printASCII - print ascii
 * print_buffer - to print them buffers
 * Return: 1 if true
 *
 */


int isPrintableASCII(int n)

{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values
 * @b: the string to print
 * @start: where to start
 * @end: where to end
 */

void printHexes(char *b, int start, int end)
{
	int x = 0;

	while (x < 10)
	{
		if (x < end)
			printf("%02x", *(b + start + x));
		else
			printf("  ");
		if (x % 2)
			printf(" ");
		x++;
	}
}


/**
 * printASCII - prints ascii values for
 * isPrintableASCII - '.' to replace nonprintable char
 * @b: string to print
 * @start: where to start
 * @end: where it ends
 * return isPrintableASCII.....
 */


void printASCII(char *b, int start, int end)
{
	int ch, x = 0;

	while (x < end)
	{
		ch = *(b + x + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		x++;
	}
}


/**
 * print_buffer - prints a buffer
 * @b: string to print
 * @size: size of the buffer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
