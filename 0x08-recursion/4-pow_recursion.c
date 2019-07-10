#include "holberton.h"

/**
 *_pow_recursion - returns value of x raised to the power of y
 *@x: number
 *@y: power
 *Return: value of x if y < 0, otherwise -1
 */
int _pow_recursion(int x, int y)
{
  if (y < 0)
    {
      return (-1);
}
  else if (y == 0)
    {
      return (1);
}
  return (x * _pow_recursion(x, y - 1));
}
