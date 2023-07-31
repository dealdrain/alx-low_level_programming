#include "lists.h"

/**
 *  * get_nodeint_at_index - Gets the nth node
 *   * @head: a pointer to head node
 *
 *    * @index: index to find in linked list
 *
 *     * Return: pointer to node or NULL if failed
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *now;
	unsigned int x;

	now = head;

	x = 0;

	while (x < index)
	{
		if (now)
			now = now->next;
		else
			return (NULL);
		x++;
	}

	if (now)

		return (now);

	else

		return (NULL);
}
