#include "holberton.h"

/**
 *print_square - print a square out of hashtags
 *@size: size of the square
 */
void print_square(int size)
{
int f, c;

for (f = 1; f <= size; f++)
{
for (c = 1; c <= size; c++)
{
_putchar(35);
}
_putchar('\n');
}
}
