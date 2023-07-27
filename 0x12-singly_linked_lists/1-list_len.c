#include "lists.h"

/**
 * list_len - ret no. of elements
 * @h: head, linked ls
 *
 * Return: no. of element
 */

size_t list_len(const list_t *h)
{
	size_t con = 0;

	while (h != NULL)
	{
		con++;
		h = h->next;
	}

	return (con);
}
