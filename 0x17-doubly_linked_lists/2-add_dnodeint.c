#include "lists.h"

/**
 *add_dnodeint - adds a node at the beginning of a list_t list
 *@head: first element in the list
 *@n: int passed to function
 *Return: address of new element, or NULL of fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		(*head)->prev = newnode;
		newnode->prev = NULL;
		*head = newnode;
	}
	return (*head);
}
