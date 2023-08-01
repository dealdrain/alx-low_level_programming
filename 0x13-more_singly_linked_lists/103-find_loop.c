#include "lists.h"

/**
 * find_listint_loop - find the loop
 * @head: head of linked list
 *
 * Desc: No malloc
 * Return: Add of node for loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cur;
	listint_t *new;

	if (head == NULL)
		return (NULL);

	cur = new = head;
	do {
		if (cur->next)
			cur = cur->next;
		else
			return (NULL);

		if (new->next->next)
			new = new->next->next;
		else
			return (NULL);
	} while (new != cur);

	cur = head;
	while (new != cur)
	{
		new = new->next;
		cur = cur->next;
	}

	return (cur);
}
