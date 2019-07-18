#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates an array of ints
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to new array, NULL if min less than max and fail
 */
int *array_range(int min, int max)
{

	int *f;
	int g, d;

	if (min > max)
	{
		return (NULL);
	}

	d = max - min + 1;
	f = malloc(sizeof(int) * d);

	if (f == NULL)
	{
		return (NULL);
	}
	for (g = 0; g < d; g++)
	{
		f[g] = min + g;
	}
	return (f);
}
