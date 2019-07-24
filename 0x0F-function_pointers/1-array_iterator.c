#include "function_pointers.h"

/**
 *array_iterator - executes function on each element of an array
 *@array: array of parameters
 *@size: size of the array
 *@action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array && size && action)
	{
		for (e = 0; e <= size; e++)
			action(array[e]);
	}

}
