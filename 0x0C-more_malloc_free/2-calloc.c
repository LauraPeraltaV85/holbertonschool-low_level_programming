#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: number of elements
 *@size: size of types
 *Return: NULL if arguments 0, if malloc fails NULL or pointer allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v;
	unsigned int s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	v = malloc(nmemb * size);

	if (v == NULL)
	{
		return (NULL);
	}

	for (s = 0; s < nmemb * size; s++)
	{
		v[s] = 0;
	}
	return (v);
}
