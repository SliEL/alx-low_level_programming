#include "hash_tables.h"

/**
 * hash_table_get - function that Retrieves the value associated
 *                  with a key in a hash table.
 * @ht: A ptr to the hash table.
 * @key: Key to get the value of.
 *
 * Return: NULL if no match and the value if key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}