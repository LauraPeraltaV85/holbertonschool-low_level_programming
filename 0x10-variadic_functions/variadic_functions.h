#ifndef _VARIADIC_
#define _VARIADIC_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _c(va_list);
void _i(va_list);
void _f(va_list);
void _s(va_list);

/**
 *struct FORM - pointer to function
 *@k: pointer to array
 *@fc: pointer function
 */
typedef struct FORM
{
	char *k;
	void (*fc)(va_list);
} print;

#endif
