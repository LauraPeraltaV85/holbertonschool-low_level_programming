#include <stdio.h>

/**
 *main - entry point
 *Result: 0
 */
int main(void)
{
long int x = 0;
long int y = 1;
long int z = 0;
char succ;

for (succ = 0; succ <= 50; succ++)
{
z = y + x;
if (succ != 50 + '0')
{
putchar(z + '0');
putchar(44);
putchar(32);
}
else 
{
putchar(z + '0');
}
x = y;
y = z;
}
putchar('\n');


}
