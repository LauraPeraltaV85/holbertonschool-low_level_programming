#include "holberton.h"

/**
 *get_bit - returns value of a bit at a given index
 *@n: number given
 *@index: index starting at 0
 *Return: return value at index or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int stat;

	if (index < 63)
	{
		stat = (n >> index) & 1;
		return (stat);
	}
	return (-1);
}
