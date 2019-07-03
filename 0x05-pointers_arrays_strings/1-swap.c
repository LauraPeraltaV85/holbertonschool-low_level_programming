#include "holberton.h"

/**
 *swap_int - swap 2 integers
 *@a: integer 1
 *@b: integer 2
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int d;

d = *a;
*a = *b;
*b = d;

}
