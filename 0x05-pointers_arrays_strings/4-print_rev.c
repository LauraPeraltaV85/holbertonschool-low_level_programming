#include "holberton.h"

/**
 *print_rev - prints string in reverse
 *@s: reverse string
 *Return: 0
 */
void print_rev(char *s)
{
int rev, w;

for (rev = 0; s[rev] != '\0'; rev++)
;
for (w = rev - 1; w >= 0; w--)
{
_putchar(s[w]);
}
_putchar('\n');

}
