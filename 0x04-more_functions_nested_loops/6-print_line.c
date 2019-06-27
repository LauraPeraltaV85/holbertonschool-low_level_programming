#include "holberton.h"

/**
 *print_line - print underscore n times
 *@n: number of times underscore is printed
 *Return
 */
void print_line(int n)
{
int d;

d = 0;
while (d < n)
{
_putchar(95);

d++;
}
_putchar('\n');

}
