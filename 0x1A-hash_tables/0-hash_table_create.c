#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: size of the array (hash table)
 *Returns: pointer to newly hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;

	if (size <= 0)
		return (NULL);

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);

	newhash->array = malloc(size * sizeof(hash_node_t));
	if (newhash->array == NULL)
	{
		free (newhash);
		return (NULL);
	}
	return (newhash);
}