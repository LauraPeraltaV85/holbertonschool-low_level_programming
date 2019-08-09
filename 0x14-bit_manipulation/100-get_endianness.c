#include "holberton.h"

/**
 *get_endianness - checks the endianess
 *Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
