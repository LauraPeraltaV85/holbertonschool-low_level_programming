#include <stdio.h>

/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
int tf;

for (tf = 1; tf <= 100; tf++)
{
if ((tf % 3 == 0) && (tf % 5 == 0))
{
printf("FizzBuzz ");
}
else if (tf % 3 == 0)
{
printf("Fizz ");
}
else if (tf % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d", tf);
putchar(' ');
}
}
putchar('\n');

return (0);
}
