#include "sort.h"

/**
 *quick_sort - quick sorts an array
 *@array: array to be sorted
 *@size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int pivot = array[last];
	int idxs = 0, count;

	if(first < last)
	{
		for(j = idxs + 1; j <= last - 1; j++)
		{
			if(array[j] <= pivot)
			{
				i++;
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
		tmp = array[i + 1];
		array[i + 1] = array[last];
		array[last] = tmp;	

}
