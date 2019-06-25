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
for (n = 48; n <= 57; n++)
{
for (o = 48; o <= 53; o++)
{
for (p = 48; p <= 57; p++)
{
if (!(m == 50 && n > 51)) 
{

 _putchar(m);
 _putchar(n);
 _putchar(58);
 _putchar(o);
 _putchar(p);
 _putchar('\n');

}
}
}
}
}
}
