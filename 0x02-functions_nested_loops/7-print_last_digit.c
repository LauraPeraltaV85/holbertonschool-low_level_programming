#include "holberton.h"

/**
 *print_last_digit - prints last digit
 *@n: sample number
 *Return 0
 */
int print_last_digit(int n)
{
int ld;

ld = n % 10;

if (n < 0)
{
_putchar((ld * -1) + '0');
return (ld * -1);
}
else
{
_putchar(ld + '0');
return (ld);
}

}
