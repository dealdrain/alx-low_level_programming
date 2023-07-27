#include "lists.h"

void __attribute__((constructor)) primary(void);

/**
 * primary - print text before the main function
 *
 * Return: nothing
 */

void primary(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon ");

	printf("my back!\n");
}
