#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees bidimensional array
 *@grid: bidimensional array
 *@height: number of rows
 *Return: nothing
 */
void free_grid(int **grid, int height)
{

	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
