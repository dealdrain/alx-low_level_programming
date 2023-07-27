#include "lists.h"

/**
 * free_list - free a `list_t` list
 *
 * @head: The ptr to the first node of linked listst
 */

void free_list(list_t *head)
{
	list_t *now;

	list_t *x;

	now = head;


	while (now != NULL)
	{
		x = now->next;
		free(now->str);
		free(now);
		now = x;
	}
}
