#include "holberton.h"

/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: number
 *Return: square root of n, if no square root return -1
 */
int squared(int a, int b)
{
    if (b == a *a)
    {
    return (a);
    }
  if (a == b)
    return (-1);
  return (squared(a + 1, b));

}
int _sqrt_recursion(int n)
{
  if (n <= 0)
    {
      return (-1);
}
  if (n == 1)
    {
      return (n);
}
  return (squared(1, n));
}
