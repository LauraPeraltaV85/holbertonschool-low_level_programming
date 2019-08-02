#include "lists.h"

/**
 *add_node_end - adds new node at the end of the list
 *@head: list
 *@str: string passed to function
 *Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newnode_end, *temp;
	int c;

	newnode_end = malloc(sizeof(list_t));
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

	newnode_end->str = strdup(str);
	for (c = 0; str[c] != '\0'; c++)
		;
	newnode_end->len = c;
	newnode_end->next = NULL;

	return (newnode_end);
}
