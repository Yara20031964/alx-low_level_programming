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
char n = '0';
while (n < '10')
{
putchar( n);
++n;
}
putchar('\n');
return (0);
}
