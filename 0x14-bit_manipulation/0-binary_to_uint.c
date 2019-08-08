#include "holberton.h"

/**
 *binary_to_uint - convert binary to unsigned int
 *@b: pointer to string
 *Return: converted number or 0 if b is NULL or different from 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int idx;

	if (*b == NULL)
		return (0);
	for (idx = 0; *b; b++)
	{
		if (*b == '0')
			idx <<= 1;
		else if (*b == '1')
			idx = (idx << 1) | 1;
		else
			return (0);
	}
	return (idx);
}
