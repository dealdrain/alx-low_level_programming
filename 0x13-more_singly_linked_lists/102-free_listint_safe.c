#include "lists.h"

/**
 * free_listint_safe - free a `listint_t` list
 * @h: double pointer to head
 *
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *now, *hold;
	size_t len;

	len = 0;
	now = *h;

	while (now != NULL)
	{
		len++;
		hold = now;
		now = now->next;
		free(hold);

		if (hold < now)
			break;
	}
	*h = NULL;

	return (len);
}
