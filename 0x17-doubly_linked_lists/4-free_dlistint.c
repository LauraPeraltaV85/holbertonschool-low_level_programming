#include "lists.h"

/**
 *free_dlistint - frees a listint_t list
 *@head: pointer to list struct
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
