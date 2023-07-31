#include "lists.h"
/**
 *  * delete_nodeint_at_index - deletes node
 *   * @head: head of linked list
 *    * @index: index to delete
 *
 *     * Return: success 1, otherwise failure -1
 *
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;

	listint_t *now;

	listint_t *bef;

	if (head == NULL || *head == NULL)
		return (-1);
	now = *head;
	bef = *head;
	if (index == 0)
	{
		*head = now->next;
		free(now);
		return (1);
	}
	a = 0;
	while (now->next != NULL)
	{
		if (a == index)
		{
			bef->next = now->next;
			free(now);
			return (1);
		}
		bef = now;
		now = now->next;
		a++;
	}
	if (a == index)
	{
		bef->next = NULL;
		free(now);
		return (1);
	}
	return (-1);
}
