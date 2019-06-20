#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
int hexa;
char let;

for (hexa = 48 ; hexa <= 57 ; hexa++)
putchar(hexa);
for (let = 'a'; let <= 'f'; let++)
putchar(let);
putchar('\n');
return (0);
}
