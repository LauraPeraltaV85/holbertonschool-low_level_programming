#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: lenght of string
 */
int _strlen(char *s)
{
	int count;
	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);

}

/**
 *argstostr - concatenates all the arguments
 *@ac: counter
 *@av: arguments
 *Return: NULL if ac/av 0 or failure, pointer to new string
 */
char *argstostr(int ac, char **av)
{

	int c = 0;
	int d;
	int g = 0;
	int len = 0;
	char *array;

	if (ac == 0 || av == 0)
		return (NULL);

	while (c < ac)
	{
		len += _strlen(av[c]);
		c++;
	}
	array = malloc((len + ac) * sizeof(char) + 1);
	if (array == 0)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d] != '\0'; d++)
		{
			array[g] = av[c][d];
			g++;
		}
		array[g] = '\n';
		g++;
	}
	array[g] = '\0';
	return (array);

} 
