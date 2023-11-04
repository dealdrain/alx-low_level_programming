#include "hash_tables.h"

/**
 * hash_table_get - gets value from a hash table
 * @ht: Hashtable to be traversed
 * @key: Key to search
 * Return: value, else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *curr = ht->array[index];

	if (ht == NULL || key == NULL)
		return (NULL);

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
