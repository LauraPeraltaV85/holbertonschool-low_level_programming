#include <stdio.h>

/**
 *main - prints number of arguments passed to main
 *@argc: counter
 *@argv: array of srtings (arguments)
 *Return: 0
 */
int main(int argc, char **argv)
{
(void) argv;

printf("%i\n", argc - 1);
return (0);
}
