#include "sort.h"

/**
 *insertion_sort_list - sorts list
 *@list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *sort = NULL;

	if (!list || !list->next)
		return;
		
	while (list != NULL)
	{		
		struct LIST *   pHead  = pList;
		struct LIST ** ppTrail = &pSorted;

		list = list->next;

		while (!(*ppTrail == NULL || head->n < (*ppTrail)->n)) 
		{ 
			ppTrail = &(*ppTrail)->next;
		}
		head->next = *ppTrail;
		*ppTrail = head;
		}
}
