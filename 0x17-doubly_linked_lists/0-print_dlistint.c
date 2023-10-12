#include "lists.h"

/**
 *  * print_dlistint - Prints all the values
 *  * @h: head ptr
 *  * Return: Number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp && temp->prev)
		temp = temp->prev;

	for (; temp; count++, temp = temp->next)
		printf("%d\n", temp->n);

	return (count);
}
