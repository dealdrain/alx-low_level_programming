#include <stdio.h>
#include "lists.h"

/**
 *  * insert_dnodeint_at_index - Inserts a new node at a given position
 *   * @h: The head of the doubly linked list
 *    * @idx: The index in which to insert the new node
 *     * @n: The number to insert in the new node
 *      * Return: The address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	dlistint_t *current = *h;
	unsigned int position = 0;

	while (current && position < idx - 1)
	{
		current = current->next;
		position++;
	}
	if (current == NULL)
		return (NULL);

	dlistint_t *new_node = create_dlistint(n, current->next, current);

	if (new_node == NULL)
		return (NULL);

	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}

/**
 *  * create_dlistint - Create a new node with values
 *   * @n: The number of the new node
 *    * @next: The next node of the new node
 *     * @prev: The previous node of the new node
 *      * Return: The address of the new node created
 **/
dlistint_t *create_dlistint(int n, dlistint_t *next, dlistint_t *prev)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;

	return (new_node);
}
