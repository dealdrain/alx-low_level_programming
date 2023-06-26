#include "main.h"

/**
  * _strlen - return with the length of a string
  * @x: String to count
  *  * Return: length of string
  */
int _strlen(char *x)
{
	int c = 0;

	for (; *x != '\0'; x++)
	{
		c++;
	}

	return (c);
}

