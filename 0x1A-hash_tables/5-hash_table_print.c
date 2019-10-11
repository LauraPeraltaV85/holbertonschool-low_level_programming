#include "hash_tables.h"

/**
 *hash_table_print - prints hash table
 *@ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	char *k, *v;
	hash_node_t *tmp;
	int s = 0;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			if (ht->array[idx] != NULL)
			{
				k = ht->array[idx]->key;
				v = ht->array[idx]->value;
				if (s == 0)
					printf("'%s': '%s'", k, v);
				else
					printf(", '%s': '%s'", k, v);
				tmp = ht->array[idx]->next;
				while (tmp != NULL)
					printf(", '%s': '%s'", k, v);
			}
		}
		printf("}\n");
	}
}
