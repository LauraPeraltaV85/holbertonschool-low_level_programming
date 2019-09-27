#include "lists.h"

/**
 *free_node - frees a list_t
 *@head: list
 */
void free_list(list_t *head)
{
	free(head);
}
