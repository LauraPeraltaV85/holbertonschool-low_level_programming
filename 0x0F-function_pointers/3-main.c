#include "3-calc.h"
#include "function_pointers.h"

/**
 *main - asks for arguments and prints result
 *@argc: number of args
 *@argv: args
 *Return: 0
 */
int main(int argc, char **argv)
{

	int e, l, rest;

	if (argc == 4)
	{
		e = atoi(argv[1]);
		l = atoi(argv[3]);
		rest = get_op_func(argv[2])(e, l);
		printf("%i\n", rest);
		return (0);
	}
	printf("Error\n");
	exit(98);
}

