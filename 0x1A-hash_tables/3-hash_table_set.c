#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table you want to update
 *@key: key
 *@value: is the value associated with the key
 *Return: 1 if succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || !*key)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
