#include <stdio.h>

/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
long int p;
long int t;

t = 612852475143;
p = 2;
while (p <= t)
{
if (t % p == 0)
{
t = t / p;
p--;
}
p++;
}
printf("%ld\n", p);
return (0);
}
