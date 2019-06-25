#include "holberton.h"
#include <unistd.h>

/**
 * print_alphabet - print alphabet
 *
 * Print alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
