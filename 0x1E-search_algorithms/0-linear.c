#include "search_algos.h"

/**
 *linear_search - searches value in array using linear search
 *@array: pointer to first element in array
 *@size: number of elements in array
 *@value: target to be found
 *Return: first index where target is found, if not found or array
 *NULL return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
