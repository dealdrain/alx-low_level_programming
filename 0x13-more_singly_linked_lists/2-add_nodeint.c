#include "lists.h"

/**
 *  * add_nodeint - add a new node
 *   * @head: head of the linked list
 *   *
 *    * @n: int to save in node
 *
 *     * Return: add of new element, otherwise NULL.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));

	if (nn == NULL)
	return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;

	return (nn);
}
