#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
int num = 48;

while (num <= 57)
{
putchar(num++);
putchar(44);
putchar(32);
}
putchar('\n');
return (0);
}
