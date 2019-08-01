#include "lists.h"

/**
 *add_node - adds a node at the beginning of a list_t list
 *@head: first element in the list
 *@str: string passed to function
 *Return: address of new element, or NULL of fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int c;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (c = 0; str[c] != '\0'; c++)
		;
	newnode->len = c;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

