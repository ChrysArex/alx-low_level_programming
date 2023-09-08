#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table.
 * @size: of the hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h = malloc(sizeof(hash_table_t));

	if (new_h == NULL)
		return (NULL);
	new_h->size = size;
	new_h->array = calloc(size, sizeof(hash_node_t *));
	return (new_h);
}
