#include "variadic_functions.h"

/**
 *sum_them_all - function that returns the summ of all its parameters
 *@n: number of parameters
 *Return: result of sum, or cero if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list arglist;
	unsigned int e;
	double sum = 0;

	va_start(arglist, n);

	if (n == 0)
		return (0);

	for (e = 0; e < n; e++)
	{
		sum = sum + va_arg(arglist, int);
		va_end(arglist);
	}
	return (sum);
}
