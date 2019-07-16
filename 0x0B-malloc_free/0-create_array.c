#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array - creates array of chars that initialize w/ specific char
 *@size: size of string
 *@c: character that initialize
 *Return: NULL if size 0, or if fails, pointer to array
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *str;

if (size == 0)
return (NULL);

str = malloc(size * sizeof(str));
if (str == NULL)
{
	free(str);
	return (NULL);
}

for (n = 0; n < size; n++)
str[n] = c;

return (str);
}
