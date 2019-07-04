#include "holberton.h"

/**
 *cap_string - capitalize words
 *@st: string
 *Return: 0
 */
char *cap_string(char *st)
{

int s, t, u;
char separators[] = ",.;:{}()!?\"\n\t\" ";

for (s = 0, u = 0; st[s] != '\0'; s++)
{
if (st[0] > 96 && st[0] < 123)
u = 1;

t = 0;
while (separators[t] != '\0')
{
if (separators[t] == st[s])
u = 1;
t++;
}

if (u)
{
if (st[s] > 96 && st[s] < 123)
{
st[s] -= 32;
u = 0;
}
else if (st[s] > 64 && st[s] < 91)
u = 0;
else if (st[s] > 47 && st[s] < 58)
u = 0;
}
}
return (st);

}
