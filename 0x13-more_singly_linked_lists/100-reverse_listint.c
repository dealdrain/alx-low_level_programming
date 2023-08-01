#include "lists.h"

/**
  * reverse_listint - a function that reverses a listint_t linked list
  * @head: double pointer to head
  *
  * Return: pointer to first node
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old;
	listint_t *next;

	old = NULL;
	next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = old;
			old = next;
		}

		*head = old;
		return (*head);
	}

	return (NULL);
}
