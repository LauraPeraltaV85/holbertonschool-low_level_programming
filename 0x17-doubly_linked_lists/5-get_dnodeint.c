#include "lists.h"

/**
 *get_dnodeint_at_index - returns the number of node
 *@head: pointer to list struct
 *@index: index of node
 *Return: index of node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
