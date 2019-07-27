#include "variadic_functions.h"

/**
 *_c - prints char
 *@args: args passed to function
 */
void _c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 *_i - prints int
 *@args: args passed to function
 */
void _i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 *_f - prints float
 *@args: args passed to function
 */
void _f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 *_s - prints int
 *@args: args passed to function
 */
void _s(va_list args)
{
	char *string;

	string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{

	print prt[] = {
		{"c", _c},
		{"i", _i},
		{"f", _f},
		{"s", _s},
	};
	va_list args;
	int e, l;
	char *sep;

	e = 0;
	sep = "";

	va_start(args, format);

	while (format && format[e])
	{
		l = 0;
		while (l < 4 && (*(format + e) != *(prt[l].k)))
			l++;
		if (l < 4)
		{
			printf("%s", sep);
			prt[l].fc(args);
			sep = ", ";
		}
		e++;
	}
		va_end(args);
		printf("\n");
}

