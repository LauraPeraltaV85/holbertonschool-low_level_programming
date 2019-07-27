#include "variadic_functions.h"

/**
 *print_numbers - print numbers followed by a newline
 *@separator: string to be printed between numbers
 *@n: number of ints passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int e;

	va_start(nums, n);

	for (e = 0; e < n ; e++)
	{
		printf("%i", va_arg(nums, int));
		if (e != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nums);
	putchar('\n');
}
