#include "function_pointers.h"

/**
 *int_index - searches for int
 *@array: array of elements
 *@size: size of array
 *@cmp: pointer to function that compares values
 *Return: index of 1st element for which cmp does not return 0
 *if no element matches -1, if size less equal to cero -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (e = 0; e < size; e++)
		{
			if (cmp(array[e]) == 1)
			{
				return (e);
			}
		}

	}
	return (-1);
}
