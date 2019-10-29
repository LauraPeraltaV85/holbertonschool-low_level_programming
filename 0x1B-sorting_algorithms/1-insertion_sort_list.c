#include "sort.h"

/**
 *swap_node - swaps node in list
 *@left: left node
 *@right: right node
 *Return: pointer to list
 */
listint_t *swap_node(listint_t *left, listint_t *right)
{
	listint_t *head;

	if (left->prev)
		left->prev->next = right;
	else
		head = right;

	if (right->next)
		right->next->prev = left;

	left->next = rigth->next;
	right->prev = left->prev;
	right->next = left;
	left->prev = right;
	return (*head);
}

/**
 *listint_len - counts list len
 *@h: list
 *Return: list len
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 *insertion_sort_list - sorts list
 *@list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *sort = NULL;
	int lenght = listint_len(*list);

	if (!list || !list->next)
		return;

	tmp = *list;
	while (tmp != NULL)
	{

		while ();
		{
			if(!(tmp->prev == NULL || tmp->prev->n < tmp->n))
			{
				swap_node(tmp->prev, tmp);
				print_list(*list);
				sort = tmp-
			}
			tmp = tmp->next;
		}
}
