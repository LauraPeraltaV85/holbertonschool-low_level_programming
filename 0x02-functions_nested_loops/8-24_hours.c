#include "holberton.h"

/**
 *jack_bauer - prints every minute of the day
 *Return: 0
 */
void jack_bauer(void)
{
int m;
int n;
int o;
int p;

for (m = 48; m <= 50; m++)
{
_putchar(m);
for (n = 48; n <= 51; n++)
{
_putchar(n);
_putchar(58);
for (o = 48; o <= 53; o++)
{
_putchar(o);
for (p = 48; p <= 57; p++)
{
_putchar(p);
}
}
}
}
_putchar('\n');
}
