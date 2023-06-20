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
for (n = 0; n <= 98; ++n)
{
for (m = 0; m <= 99; ++m)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
putchar(' ');
putchar(m / 10 + '0');
putchar(m % 10 + '0');
if (n == 98 && m == 99)
continue;
putchar(',');
putchar(' ');
return (0);
}
}
}
