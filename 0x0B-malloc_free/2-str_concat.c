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
 *_strcat - concatenate two strings
 *@dest: string 1
 *@src: string 2
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int destlen, srclen;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
		;
	for (srclen = 0; src[srclen] != '\0'; srclen++, destlen++)
	{
		dest[destlen] = src[srclen];
	}
	dest[destlen] = '\0';
	return (dest);
}

/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to newly allocated space in memory, NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int d;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = malloc((_strlen(s1)) + (_strlen(s2)) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	while (s1[d])
	{
		a[d] = s1[d];
		d++;
	}
	a[d] = '\0';
	_strcat(a, s2);

	return (a);

}
