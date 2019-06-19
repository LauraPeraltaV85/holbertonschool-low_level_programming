#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
char charType;
int integerType;
longint lintegerType;
longlongint llintegerType;
float floatType;

printf("Size of a char: %1d byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
printf("Size of a long int: %ld byte(s)\n", sizeof(lintegerType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(llintegerType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

return (0);
}
