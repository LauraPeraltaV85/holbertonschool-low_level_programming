#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

#include "holberton.h"

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
 **_strcpy - copies string into another pointer
 *@dest: pointer
 *@src: pointer
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int e;

	e = 0;
	while (src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
	dest[e] = '\0';
	return (dest);
}

/**
 *_strdup - returns pointer to a newly allocated space of memory
 *@str: string
 *Return: NULL if str NULL, pointer to duplicated string on success
 */
char *_strdup(char *str)
{

	char *cop = malloc(_strlen(str) + 1);

	if (cop == NULL)
	{
		return (NULL);
	}
	_strcpy(cop, str);
	return (cop);

}
