#include "calc.h"
#include "function_pointers.h"

/**
 *op_add - add 2 numbers
 *@a: first number
 *@b: second number
 *Return: int result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substract 2 numbers
 *@a: first number
 *@b: secind number
 *Return: int result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiply 2 numbers
 *@a: first number
 *@b: second number
 *Return: int result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide 2 numbers
 *@a: first number
 *@b: second number
 *Return: int result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - module of 2 numbers
 *@a: first number
 *@b: second number
 *Return: int result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
