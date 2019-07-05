#include "holberton.h"

/**
 *rot13 - encode string
 *@str: string
 *Return: 0
 */
char *rot13(char *str)
{
int g, h, u;

char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

u = 52;
for (g = 0; str[g] != '\0'; g++)
{
h = 0;
while (h < u)
{
if (alpha[h] == str[g])
{
str[g] = alpha[(h + 13) % 26 + (h / 26) * 26];
h = u;
}
h++;
}
}
return (str);
}
