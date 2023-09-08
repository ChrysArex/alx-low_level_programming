#include "hash_tables.h"
#include <string.h>
#include <stddef.h>
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *data = ht->array[index];

	if (data == NULL)
		return (NULL);
	while (data->next)
	{
		if (strcmp(data->key, key) == 0)
			break;
		data = data->next;
	}
	return (data->value);
}
