#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - entry point
 *Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int ln;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

ln = n % 10;
if (ln > 5)
printf("Last digit of %d is %d is greater than 5", n, ln);
else if (ln == 0)
printf("Last digit of %d is %d is and  is  0", n, ln);
else if (ln < 6 && ln != 0)
printf("Last digit of %d is %d is less than 6 and not 0", n, ln);
return (0);
}
