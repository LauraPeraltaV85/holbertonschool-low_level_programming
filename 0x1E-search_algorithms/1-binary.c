#include "search_algos.h"

/**
 *binary_search - searches value in sorted array using the Binary search
 *@array: pointer to the first element in array
 *@size: number of elements in array
 *@value: target to be found
 *Return: if value not found or array NULL -1,
 *otherwise index where value is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid = 0, i = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array:");
		i = low;
		for (; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < (high))
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
