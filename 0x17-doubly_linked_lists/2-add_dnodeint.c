#include "lists.h"

/**
 *  * add_dnodeint - Add a new node at the beginning of a `dlistint_t` list
 *   * @head: Double ptrr to the head node
 *    * @n: Val
 *     * Return: Add of new node, or NULL if failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
