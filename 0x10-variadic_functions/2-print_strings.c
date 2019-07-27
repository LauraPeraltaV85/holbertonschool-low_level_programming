#include "variadic_functions.h"

/**
 *print_strings - prints string followed by newline
 *@separator: string printed between strings
 *@n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int e;
	char *l;

	if (separator != NULL)
	{
		va_start(str, n);

		for (e = 0; e < n; e++)
		{
			l = va_arg(str, char *);
			if (l == NULL)
				printf("(nil)");
			else
				printf("%s", l);
			if (e != (n - 1))
				printf("%s", separator);
		}
		va_end(str);
		putchar('\n');
	}
}
