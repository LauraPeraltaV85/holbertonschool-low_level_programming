#include "holberton.h"

/**
 *print_triangle - print a triangle with hashtags
 *prints a sequence of hashtags
 *@size: size of triangle
 */
void print_triangle(int size)
{
int f, c;
 
for (f = 1; f <= size; f++)
{
for (c = 1; c <= size; c++)
{
if(c <= size - f)	  
{             
_putchar(32);
}
else 
{
_putchar(35);
}
}
if (f < size)
{
_putchar('\n');
}
}
_putchar('\n');
}

