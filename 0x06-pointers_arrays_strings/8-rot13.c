#include "holberton.h"

/**
 *rot13 - encode string
 *@str: string
 *Return: 0
 */
char *rot13(char *str)
{
  int g;
  char org[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLM"};
  char new[52] = {"nopqrstuvwxyzabcdefghijklm"};

  g = 0;
  while (str[g] != '\0')
    {
      if ((str[g] > 64 && str[g] < 91) || (str[g] > 94 && str[g] < 123))
	    {
	      str[g] = (str[g] - 65 > 25) ?
		new[str[g] - 97] : org[str[g] - 65];
	    }
      g++;
	}
   
  return (str); 

}
