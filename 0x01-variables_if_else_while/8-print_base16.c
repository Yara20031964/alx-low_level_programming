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
char lowercase = 'a';
while (n < 10)
{
putchar(n + '0');
++n;
}
while (lowercase <= 'f')
{
putchar(lowercase);
lowercase += 1;
}
putchar('\n');
return (0);
}
