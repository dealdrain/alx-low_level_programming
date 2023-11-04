#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to hash
 * @ht: hash table to add to
 * @key: key to add
 * @value: store value
 * Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *current_node = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	if (current_node && strcmp(key, current_node->key) == 0)
	{
		free(current_node->value);
		current_node->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
