#include "hash_tables.h"

/**
 *hash_table_get - retrieves value associated w/ key
 *@ht: hash table to look into
 *@key: key its being looked for
 *Return: value if key is found, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	if (strcmp(ht->array[idx]->key, key) == 0)
		return (ht->array[idx]->value);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
