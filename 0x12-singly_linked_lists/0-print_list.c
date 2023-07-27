#include "lists.h"


/**
 * print_list - print all elements of `list_t` list
 * @h: linked lists
 * Return: no. of nodes
 */


size_t print_list(const list_t *h)
{
	size_t no;

	no = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		no++;
	}

	return (no);
}
