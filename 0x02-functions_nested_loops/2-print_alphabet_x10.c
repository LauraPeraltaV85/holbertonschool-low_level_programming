#include "holberton.h"
#include <unistd.h>

/**
 *print_alphabet_x10 - print alphabet 10 times
 *prints alphabet 10 times
 *Return: 0
 */
void print_alphabet_x10(void)
{
char alpha;
char beta = 0;


while (beta < 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
beta++;
}

}
