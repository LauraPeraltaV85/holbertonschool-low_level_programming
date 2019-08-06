#include "lists.h"

/**
 *add_nodeint - adds a node at the beginning of a list_t list
 *@head: first element in the list
 *@n: int passed to function
 *Return: address of new element, or NULL of fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
