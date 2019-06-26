#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 *@\\0/\n: printf parameter
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

/**
 *while (i < 10) - omitted as per request
 *{
 *putchar(i);
 *}
 */

printf("Infinite loop avoided! \\o/\n");

return (0);
}
