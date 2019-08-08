#include "holberton.h"

/**
 *set_bit - sets value of a bit to 1 at given index
 *@n: pointer to number given
 *@index: index
 *Return: 1 if success or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index < 63)
	{
		*n |= mask;
		return (1);
	}
	return (-1);
}
