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
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp = ht->array[idx];
	hash_node_t *newpair = malloc(sizeof(hash_node_t));

	if (!ht || !key || !value)
		return (0);

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	if (!newpair)
		return (0);

	newpair->key = strdup(key);
	newpair->value = strdup(value);
	newpair->next = ht->array[idx];
	ht->array[idx] = newpair;

	return (1);
}
