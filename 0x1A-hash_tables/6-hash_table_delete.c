#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *data/*, *coll_data*/;

	if (ht != NULL)
	{
		for (; i < (ht->size); i++)
		{
			if (ht->array[i] != NULL)
			{
				data = ht->array[i];
				/*while (data->next)
				{
					coll_data = data->next;
					while (coll_data->next)
						coll_data = coll_data->next;
					free(coll_data->key);
					free(coll_data->value);
					free(coll_data);
				}*/
				free(data->key);
				free(data->value);
			}
		}
		free(ht);
	}
}
