#include "holberton.h"

/**
 *rev_string - reverses string
 *@s: string pointer
 *Return: 0
 */
void rev_string(char *s)
{
int c, e;
char *s_ptr, *f_ptr, ch;

for (c = 0; s[c] != '\0'; c++)
;
s_ptr = s;
f_ptr = s;

for (e = 0; e < c - 1; e++)
{
f_ptr++;
}
for (e = 0; e < c / 2; e++)
{
ch = *f_ptr;
*f_ptr = *s_ptr;
*s_ptr = ch;

s_ptr++;
f_ptr--;
}
}
