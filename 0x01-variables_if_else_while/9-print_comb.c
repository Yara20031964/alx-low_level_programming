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
while (n < 10)
{
if (n == 9)
{
putchar(n + '0');
putchar('$');
++n;
}
else
{
putchar(n + '0');
putchar(',');
putchar(' ');
++n;
}
}
putchar('\n');
return (0);
}
