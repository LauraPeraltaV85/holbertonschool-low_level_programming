#include "holberton.h"

/**
 *is_prime_number - returns 1 if input is a prime number
 *@n: prime number
 *Return: 1 if prime number, otherwise 0
 */
int is_prime_number(int n)
{
if (n % 2 == 0)
{
return (0);
}
else if (n <= 1)
{
return (0);
}
is_prime_number((!(n - 1) + 1) / n);
return (1);
}
