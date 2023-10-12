#include "lists.h"

/**
 ** sum_dlistint - Get sum of the data `n`
 ** @head: Head of ll
 ** Return: Sum of all `n` or 0 if failed
 **/

int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
