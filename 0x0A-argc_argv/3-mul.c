#include <stdlib.h>
#include <stdio.h>

/**
 *main - print multiplication between two numbers
 *@argc: counter
 *@argv: agurments given
 *Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
int mult;

if (argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
