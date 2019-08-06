#include "lists.h"

/**
 *add_nodeint_end - adds new node at the end of the list
 *@head: list
 *@n: string passed to function
 *Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *newnode_end, *temp;

	newnode_end = malloc(sizeof(listint_t));
	if (newnode_end == NULL)
		return (NULL);

	if (*head == NULL)
		*head = newnode_end;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newnode_end;
	}

	newnode_end->n = n;
	newnode_end->next = NULL;

	return (newnode_end);
}
