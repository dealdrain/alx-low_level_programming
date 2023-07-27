#include "lists.h"

/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *br;
	char *sg;
	list_t *que;

	que = *head;
	br = malloc(sizeof(list_t));
	if (br == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	sg = strdup(str);
	if (sg == NULL)
	{
		free(br);
		return (NULL);
	}

	br->len = _strlen(str);
	br->str = sg;
	br->next = NULL;

	if (*head == NULL)
	{
		*head = br;
		return (br);
	}

	while (que->next != NULL)
	{
		que = que->next;
	}
	que->next = br;

	return (br);
}

/**
 * _strlen - print str len
 * @x: str to print
 *
 *
 * Return: str len
 */

int _strlen(const char *x)
{
	int z = 0;

	while (x[z] != '\0')
	{
		z++;
	}
	return (z);
}
