#include "lists.h"

/**
 * add_dnodeint_end - Adds new node
 * @head: double ptr to head node
 * @n: val
 * Return: Add of new element and NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *tmp = *head;

		while (tmp->next)
			tmp = tmp->next;

		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
