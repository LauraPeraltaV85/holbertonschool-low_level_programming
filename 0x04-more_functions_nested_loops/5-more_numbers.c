#include "holberton.h"
#include <unistd.h>

/**
 *more_numbers - print numbers from 0 to 14 ten times
 *prints numbers 10 times
 *Return 0
 */
void more_numbers(void)
{
int nmbr;
int nmbr2 = 0;


while (nmbr2 < 10)
{
for (nmbr = 0; nmbr <= 14; nmbr++)
{
if (nmbr > 9)
{
_putchar(nmbr / 10 + '0');
}
_putchar(nmbr % 10 + '0');
}
_putchar('\n');
nmbr2++;
}

}
