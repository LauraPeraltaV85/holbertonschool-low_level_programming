#include "holberton.h"
/**
 *print_most_numbers - entry point
 *Return 0
 */
void print_most_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
{
_putchar(num);
}
}
_putchar('\n');

}
