#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - sum the two diagonals in a squared matrix
 *@a: pointer to matrix
 *@size: size of the matrix
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
int c, d1, d2;

c = 0;
d1 = 0;
d2 = 0;

while (c < size)
{
d1 = d1 + a[(size * c) +c];
d2 = d2 + a[(size - 1) * (c + 1)];
c++;
}
printf("%i, %i\n", d1, d2);
}
