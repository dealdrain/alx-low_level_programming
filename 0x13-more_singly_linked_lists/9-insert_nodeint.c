#include "lists.h"


/**
 *  * insert_nodeint_at_index - insert a new node at a given position
 *   * @head: double pointer to the head
 *
 *    * @index: insert node at this index
 *
 *     * @n: value to store
 *      * Return: Add new node, otherwise NULL
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *fut;
	listint_t *old;

	unsigned int x;

	if (head == NULL)

		return (NULL);
	old = *head;

	for (x = 1; old && x < index; x++)
	{
		old = old->next;
		if (old == NULL)
			return (NULL);
	}
	fut = malloc(sizeof(listint_t));
	if (fut == NULL)
	{
		free(fut);
		return (NULL);
	}
	fut->n = n;

	if (index == 0)
	{
		*head = fut;
		fut->next = old;
	}
	else if (old->next)
	{
		fut->next = old->next;
		old->next = fut;
	}
	else
	{
		fut->next = NULL;
		old->next = fut;
	}
	return (fut);
}
