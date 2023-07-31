#include "lists.h"

/**
 *  * print_listint - print all elements of a `listint_t` list
 *
 *  * @h: linked list
 *  * Return: no. of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *a;
	size_t x;

	for (a = h, x = 0; a != NULL; x++, a = a->next)

		printf("%d\n", a->n);

	return (x);
}
