#include <stdio.h>

/**
 *print_array(int *a, int n);
 *@a: pointer to array
 *@n: integers
 *Return: 0
 */
void print_array(int *a, int n)
{
  int r;

  for (r = 0; r < n; r++)
    {
  printf ("%d", a[r]);
  if (r != n -1)
    { 
      printf(", ");
}
  else 
    {
      printf("\n");
    }
    }
}
