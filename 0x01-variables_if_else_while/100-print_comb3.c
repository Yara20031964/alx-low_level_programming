#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: "A c program that display by using printf"
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = 0;
int m = 0;
for (n = 0; n < 9; ++n)
{
for (m = n + 1; m <= 9; ++m)
{
putchar(n +  '0');
putchar(m + '0');
if ((n + m) != 17)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
