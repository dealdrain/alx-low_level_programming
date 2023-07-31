#include "lists.h"

/**
 *  * add_nodeint_end - adds a new node at the end
 *   * @head: a double pointer to the head node
 *    * @n: int value to store in new node
 *     * Return: Add of new element, otherwise NULL
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *now;
	listint_t *new;

	now = *head;

	while (now && now->next != NULL)
		now = now->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (now)
		now->next = new;
	else
		*head = new;
	return (new);
}
