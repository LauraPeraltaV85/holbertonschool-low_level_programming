#include "3-calc.h"
#include "function_pointers.h"

/**
 *get_op_func - selects correct fuction to perform the operation asked
 *@s: operator passed as argument
 *Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;

	}
	printf("Error\n");
	exit(99);
}
