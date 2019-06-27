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
for (h = k; h > 0; h--)
{
_putchar(32);
}

_putchar(92);
_putchar('\n');
k++;
n--;
}
if (n <= 0)
{
_putchar('\n');
}
}

