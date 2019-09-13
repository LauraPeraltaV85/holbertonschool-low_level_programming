#include "lists.h"

/**
 *sum_dlistint - sums all the data(n) of a listint_t
 *@head: pointer to list struct
 *Return: sum of data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
