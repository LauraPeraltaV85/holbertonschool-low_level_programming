#include "holberton.h"

/**
 *times_table - 9 times table
 *Return: 0
 */
void times_table(void)
{
int t;
int v;
int y;


for (t = 0; t <= 9; t++)
{
v = 0;
while (v < 10)
{
y = t * v;
if (y > 9)
{
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
}
else if (v != 0)
{
_putchar(' ');
_putchar(y + '0');
}
else
{
_putchar(y + '0');
}
if (v != 9)
{
_putchar(44);
_putchar(32);
}
v++;
}
_putchar('\n');
}
}
