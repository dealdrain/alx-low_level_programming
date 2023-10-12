#include "lists.h"

/**
 *  * delete_dnodeint_at_index - Deletes node LL
 *   * @head: Double pt to head LL
 *    * @index: Index to rm from LL
 *     * Return: 1 if successful, -1 if failed
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
		return delete_first_dnode(head);

	dlistint_t *current = get_dnodeint_at_index(*head, index);
	if (current == NULL)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

/**
 *  * delete_first_dnode - Remove the first node of a doubly linked list
 *   * @head: The head of the doubly linked list
 *    * Return: 1 if deleted, -1 if failed
 *     */
int delete_first_dnode(dlistint_t **head)
{
	if (*head == NULL)
		return (-1);

	dlistint_t *current = (*head)->next;
	if (current)
		current->prev = NULL;

	free(*head);
	*head = current;
	
	return (1);
}
