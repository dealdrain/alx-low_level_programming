#include "hash_tables.h"

/**
 * key_index - get key index
 * @key: key of key/value pair
 * @size: array size
 * Return: index location of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
