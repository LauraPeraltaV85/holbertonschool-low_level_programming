#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: counter
 *@argv: arguments given
 *Return: 0 if no argument given, 1 if argument different than digits
 */
int main(int argc, char **argv)
{

int add = 0;
int arg;
int arg2;

if (argc < 2)
{
printf("0\n");
return (0);
}
else
{
for (arg = 1; arg < argc; arg++)
{
for (arg2 = 0; argv[arg][arg2] != '\0'; arg2++)
{
if (argv[arg][arg2] < '0' || argv[arg][arg2] > '9')
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[arg]);
}
}
printf("%i\n", add);
return (0);
}
