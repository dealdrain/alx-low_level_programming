#include "lists.h"

/**
 * free_dlistint - Free a `dlistint_t` dl ls
 * @head: Head of ll
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
