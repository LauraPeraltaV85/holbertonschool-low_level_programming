#include "lists.h"

/**
 *get_nodeint_at_index - returns the number of node
 *@head: pointer to list struct
 *@index: index of node
 *Return: index of node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (0);
	}
	return (head);
}
