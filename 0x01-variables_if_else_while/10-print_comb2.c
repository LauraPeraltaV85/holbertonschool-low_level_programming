#include <stdio.h>
/**
 * main - entry point
 * 
 * Return: 0
 */
int main(void)
{
int num1 = 48;
int num2 = 48;
while (num1 <= 57 && num2 <= 57)
{
putchar(num1);
putchar(num2);
if (num1 != 57 || num2 != 57)
{
putchar(44);
putchar(32);
}
num2++;
if (num2 == 58 && num1 != 57)
{
num2 = 48;
num1++;
}
}
putchar('\n');
return (0);
}
