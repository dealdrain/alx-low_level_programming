#include "lists.h"

/**
 *  * sum_listint - returns the sum of all the data (n) of a....
 *   * @head: head of the linked list
 *
 *    * Return: sum of data
 **/


int sum_listint(listint_t *head)
{
	int all;

	listint_t *current;

	all = 0;

	if (head == NULL)
		return (all);

	current = head;

	while (current != NULL)
	{
		all += current->n;

		current = current->next;
	}
	return (all);
}
