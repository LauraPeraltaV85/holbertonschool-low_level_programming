#include "lists.h"

/**
 *insert_nodeint_at_index - inserts new node at a given position
 *@head: double pointer to list
 *@idx: index of the list
 *@n: data for new node
 *Return: address of new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		temp = *head;
		for (count = 1; count < idx; count++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
