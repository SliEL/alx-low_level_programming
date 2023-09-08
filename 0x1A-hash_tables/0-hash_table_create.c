#include "hash_tables.h"

/**
 * hash_table_create - function that Creates a hash table.
 * @size: Size of the array.
 *
 * Return: ptr to the hash tabel or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int index;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		hash_t->array[index] = NULL;

	return (hash_t);
}