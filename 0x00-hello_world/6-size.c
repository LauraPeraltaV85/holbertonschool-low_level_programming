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

printf("Size of a char: %1d bytes\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(integerType));
printf("Size of a long int: %ld bytes\n", sizeof(lintegerType));
printf("Size of a long long int: %ld bytes\n", sizeof(llintegerType));
printf("Size of a float: %ld bytes\n", sizeof(floatType));

return (0);
}
