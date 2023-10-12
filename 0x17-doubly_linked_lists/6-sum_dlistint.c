#include "lists.h"

/**
 ** sum_dlistint - Get sum of the data `n`
 ** @head: Head of ll
 ** Return: Sum of all `n` or 0 if failed
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
