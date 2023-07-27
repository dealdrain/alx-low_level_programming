#include "lists.h"

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: ptr X2
 * @str: str to be saved
 *
 * Return: Add of new element, otherwise null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *noc;

	if (head != NULL && str != NULL)
	{
		noc = malloc(sizeof(list_t));
		if (noc == NULL)
			return (NULL);

		noc->str = strdup(str);
		noc->len = _strlen(str);
		noc->next = *head;

		*head = noc;

		return (noc);
	}

	return (0);
}

/**
  * _strlen - str len
  * @x: String to count
  * Return: Str len
  */



int _strlen(const char *x)
{
	int y;

	y = 0;

	while (*x)
	{
		x++;
		y++;
	}

	return (y);
}
