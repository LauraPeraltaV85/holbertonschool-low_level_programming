#include "holberton.h"

/**
 *print_triangle - print a triangle with hashtags
 *prints a sequence of hashtags
 *@size: size of triangle
 */
void print_triangle(int size)
{
  int f, c, e = 1;

f = 1;    
while (f <= size)
    {
      for (c = 1 ; c < f; c--)
	{
	  _putchar(35);
	  e++;
	}
      if (size <= 0)
	{
	  _putchar('\n');
}
              f++;
      }
     _putchar('\n');
}

