#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns pointer to bidimensional array of ints
 *@width: number of columns
 *@height: number of rows
 *Return: NULL if fail, height, width are 0 or negative and pointer if success
 */
int **alloc_grid(int width, int height)
{

	int **matrix;
	int c, d;

	matrix = malloc(height * sizeof(*matrix));

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < height; c++)
	{
		matrix[c] = malloc(width * sizeof(matrix));

			if (matrix[c] == NULL)
			{
				for (; c >= 0; c--)
				{
					free(matrix[c]);
				}
					free(matrix);
					return (NULL);
			}

		for (d = 0; d < width; d++)
			matrix[c][d] = 0;
	}
	return (matrix);
}
