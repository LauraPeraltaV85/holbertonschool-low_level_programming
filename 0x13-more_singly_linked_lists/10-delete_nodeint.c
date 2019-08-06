#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at index
 *@head: double pointer to list
 *@index: node index
 *Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp == NULL)
			return (-1);
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		for (; count < index; count++)
		{
			if (temp == NULL)
				return (-1);
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		free(temp);
	}
	return (1);
}
