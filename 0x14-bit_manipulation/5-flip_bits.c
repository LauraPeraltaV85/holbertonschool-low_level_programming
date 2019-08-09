#include "holberton.h"

/**
 *flip_bits - number of bits you need to flip to get from one number to another
 *@n: first number given
 *@m: second number given
 *Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, res;

	res = n ^ m;

	for (; res > 0; res >>= 1)
	{
		if (res & 1)
			count++;
	}
	return (count);
}
