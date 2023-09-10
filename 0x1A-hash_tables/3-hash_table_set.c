#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key of the element we add
 * @value: the value of the element we add
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (new->key == NULL)
		return (0);
	strcpy(new->key, key);
	new->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (new->value == NULL)
		return (0);
	strcpy(new->value, value);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = malloc(sizeof(char) * (strlen(value) + 1));
			strcpy(ht->array[index]->value, value);
			free(new->value);
			free(new->key);
			free(new);
			return (1);
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
