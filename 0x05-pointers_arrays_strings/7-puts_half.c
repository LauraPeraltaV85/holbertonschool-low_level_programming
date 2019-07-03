#include "holberton.h"

/**
 *puts_half - prints half of the string
 *@str: half of the string to be printed
 *Return: 0
 */
void puts_half(char *str)
{

int half;

for (half = 0; str[half] != '\0'; half++)
;
half++;
half /= 2;
while (str[half] != '\0')
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}
