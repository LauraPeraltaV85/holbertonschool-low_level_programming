#include "lists.h"

/**
 *free_listint2 - frees a listint_t list
 *@head: pointer to list struct
 */
void free_listint2(listint_t **head)
{

	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}

