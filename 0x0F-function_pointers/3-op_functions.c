#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add op
 * @a: int 1
 * @b: int 2
 * Return: sum of two int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction op
 * @a: int 1
 * @b: int 2
 * Return: minus of two ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication op
 * @a: int 1
 * @b: int 2
 * Return: product of two ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division op
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus op
 * @a: int 1
 * @b: int 2
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
