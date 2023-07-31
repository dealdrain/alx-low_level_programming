#include "lists.h"

/**
 *  * free_listint2 - frees a listint_t list
 *   * @head: head of linked list
 *
 *    * Return: nothing
 *
 */


void free_listint2(listint_t **head)
{
	listint_t *old;

	if (head == NULL)
		return;
	old = *head;

	while (old != NULL)
	{
		old = old->next;
		free(*head);
		*head = old;
	}
	*head = NULL;
}
