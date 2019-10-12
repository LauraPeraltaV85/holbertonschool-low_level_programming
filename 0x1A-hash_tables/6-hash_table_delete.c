#include "hash_tables.h"

/**
 *hash_table_delete - deletes hash table
 *@ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp, *tmp2;

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			if (ht->array[idx] != NULL)
			{
				tmp = ht->array[idx];
				while (tmp != NULL)
				{
					tmp2 = tmp->next;
					free(tmp->value);
					free(tmp->key);
					free(tmp);
					tmp = tmp2;
				}
				ht->array[idx] = NULL;
			}
			free(ht->array[idx]);
		}
		free(ht->array);
		free(ht);
	}
}
