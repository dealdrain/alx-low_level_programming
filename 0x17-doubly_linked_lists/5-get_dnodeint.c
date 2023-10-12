#include "lists.h"

/**
 ** get_dnodeint_at_index - Get the nth node dLL
 ** @head: Ptr to head of the linked list
 ** @index: Node ind to return
 ** Return: Node at the given index and NULL if failed
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *up;
	unsigned int x;

	up = head;
	for (x = 0; up && x < index; up = up->next, x++)
		;

	return (up);
}
