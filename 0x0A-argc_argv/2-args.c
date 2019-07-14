#include "holberton.h"
#include <stdio.h>

/**
 *main - prints every argument given
 *@argc: counter
 *@argv: array of strings (arguments)
 *Return: 0
 */
int main(int argc, char **argv)
{
int count;

for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
