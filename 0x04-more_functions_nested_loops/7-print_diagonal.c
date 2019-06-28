#include "holberton.h"

/**
 *print_diagonal - print backslash
 *prints a sequence of backslashes
 *@n: number of backslashes to be printed
 */
void print_diagonal(int n)
{
int k;
int h;

k = 0;
while (n > 0)
{
  h = k;
     while (h > 0)
       {
           _putchar(32);
	   h--;
       }
 	   
        _putchar(92);
        _putchar('\n');
        k++;
        n--;
 }
 if (k <= 0)
   {
     _putchar('\n');
   }
}

