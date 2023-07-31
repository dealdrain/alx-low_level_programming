#include "lists.h"

/**
 *  * pop_listint - Delete the head node
 *   * @head: double pointer to head node
 *
 *    * Return: head nodes data `n`
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *pick;

	if (*head == NULL)
		return (0);

	pick = *head;

	x = pick->n;
	*head = pick->next;

	free(pick);

	return (x);
}
