#include "lists.h"

/**
 * print_list - print all elements of `list_t` list
 * @h: linked lists
 * Return: no. of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *now;
	size_t n = 0;

	now = h;

	while (now != NULL)
	{
		printf("[%d] %s\n", now->len, now->str);
		now = now->next;
		n++;
	}

	return (n);
}
