#include "holberton.h"

/**
 *string_toupper - cahnge all lowwercase to uppercase
 *@u: string
 *Return: 0
 */
char *string_toupper(char *u)
{
  int t;  

  for (t = 0; u[t] != '\0'; t++)
    {
      if (u[t] > 96 && u[t] < 123)
	{
	  u[t] = u[t] - 32;
	}
    }
  return (u);


}
