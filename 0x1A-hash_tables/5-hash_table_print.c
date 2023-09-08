#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *data;

	if (ht != NULL)
	{
		printf("{");
		for (; i < (ht->size); i++)
		{
			if (ht->array[i] != NULL)
			{
				data = ht->array[i];
				printf("\'%s\': \'%s\'", data->key, data->value);
				while (data->next)
				{
					data = data->next;
					printf(", \'%s\': \'%s\'", data->key, data->value);
				}
				break;
			}
		}
		i++;
		for (; i < (ht->size); i++)
		{
			if (ht->array[i] != NULL)
			{
				data = ht->array[i];
				printf(", \'%s\': \'%s\'", data->key, data->value);
				while (data->next)
				{
					data = data->next;
					printf(", \'%s\': \'%s\'", data->key, data->value);
				}
			}
		}
		printf("}\n");
	}
}
