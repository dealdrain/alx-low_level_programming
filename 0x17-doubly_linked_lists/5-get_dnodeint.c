#include "lists.h"

/**
 ** get_dnodeint_at_index - Get the nth node dLL
 ** @head: Ptr to head of the linked list
 ** @index: Node ind to return
 ** Return: Node at the given index and NULL if failed
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	for (unsigned int i = 0; current && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
