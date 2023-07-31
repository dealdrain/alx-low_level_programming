#include "lists.h"

/**
 *  * listint_len - find number
 *   * @h: linked list head
 *
 *    * Return: elements in list
 *
 **/

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
