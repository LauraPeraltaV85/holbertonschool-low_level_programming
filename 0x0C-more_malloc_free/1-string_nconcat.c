#include "holberton.h"
#include <stdlib.h>

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: lenght of string
 */
unsigned int _strlen(char *s)
{
	unsigned int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

/**
 *string_nconcat - concatenates 2 strings
 *@s1: string number 1
 *@s2: string 2
 *@n: number of char to be printed from s2
 *Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, d = 0, i = 0;
	char *w;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	d = _strlen(s2);

	if (n >= d)
	{
		n = d;
	}

	w = malloc((_strlen(s1)) + n + 1);

	if (w == NULL)
	{
		return (NULL);
	}
	while (s1[a] != '\0')
	{
		w[a] = s1[a];
		a++;
	}
	for (; s2[i] != '\0'; i++, a++)
	{
		if (i == n)
			break;
		w[a] = s2[i];
	}
	w[a] = '\0';

	return (w);

}
