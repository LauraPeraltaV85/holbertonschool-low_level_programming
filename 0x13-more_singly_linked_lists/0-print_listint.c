#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint - prints elements in a linked list
 *@h: pointer to first element of the list
 *Return: number of elements in linked list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
