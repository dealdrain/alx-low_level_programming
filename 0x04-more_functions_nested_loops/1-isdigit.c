#include "main.h"

/**
 * _isdigit - function to check for a digit
 * @n: the number to be checked
 * Return: 1 if digit
 *
 */

int _isdigit(int n)
{
	if (n > 47 && n < 58)
	{
		return (1);
	}
	return (0);
}
