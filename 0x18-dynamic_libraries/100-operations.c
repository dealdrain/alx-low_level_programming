/**
 ** add - Func addition
 ** @a: parameter 1
 ** @b: parameter 2
 ** Return: Returns add a and b
 **/

int add(int a, int b)
{
	return (a + b);
}

/**
 ** mul - Func multiplication
 ** @a: parameter 1
 ** @b: parameter 2
 ** Return: Returns mul a and b
 **/

int mul(int a, int b)
{
	return (a * b);
}

/**
 ** sub - Func subtraction
 ** @a: parameter 1
 ** @b: parameter 2
 ** Return: Returns sub a and b
 **/

int sub(int a, int b)
{
	return (a - b);
}

/**
 ** div - Func division
 ** @a: parameter 1
 ** @b: parameter 2
 ** Return: Returns div a and b
 **/

int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 ** mod - Func modulos
 ** @a: parameter 1
 ** @b: parameter 2
 ** Return: Returns modulos a and b
 **/

int mod(int a, int b)
{
	return (a % b);
}
