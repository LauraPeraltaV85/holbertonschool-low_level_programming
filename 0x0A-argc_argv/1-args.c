#include "holberton.h"
#include <stdio.h>

/**
 *main - print number of arguments passed into main
 *@argc: counter
 *@argv: array of strings (arguments)
 *Return: 0\
*/
int main(int argc, char **argv)
{

(void) argv;

printf("%d\n", argc - 1);
return (0);
}
