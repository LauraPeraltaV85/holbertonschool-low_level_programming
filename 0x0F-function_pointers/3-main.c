#include "calc.h"
#include "function_pointers.h"

/**
 *main - asks for arguments and prints result
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
	if (argv[2] == '/' || argv[2] == '%' && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("Error\n");
	exit(98);
}

