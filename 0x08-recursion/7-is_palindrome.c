#include "holberton.h"
int pal(char *s, int p, int d);

/**
 *is_palindrome - returns 1 if string is a palidrome and 0 if not
 *@s: string
 *Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
_strlen_recursion(s);
return (pal(s, 0, _strlen_recursion - 1));
}

/**
 *pal - compares chars
 *@s: string
 *@p: char1
 *@d: char2
 *Return: 0
 */
int pal(char *s, int p, int d)
{
if (p > d / 2)
{
return (1);
}
else if (*(s + p) == *(s + d - p))
{
return (pal(s, p + 1, d));
}
else
return (0);
}
