#include "lists.h"

/**
 *  * dlistint_len - Counts nodes in dL
 *   * @h: Head ptr
 *    * Return: No.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp && tmp->prev)
		tmp = tmp->prev;

	for (; tmp; count++, tmp = tmp->next)
		;
	return (count);
}
