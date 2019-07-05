#include "holberton.h"

/**
 *leet - encode string into 1337
 *@str: string
 *Return: 0
 */
char *leet(char *str)
{
int t, r;
char enc[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char chg[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

for (t = 0; str[t] != '\0'; t++)
{
for (r = 0; r < 10; r++)
{
if (str[t] == enc[r])
{
str[t] = chg[r];
}
}
}
return (str);

}
