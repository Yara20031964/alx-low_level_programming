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
char lowercase = 'z';
while (lowercase >= 'a')
{
putchar(lowercase);
lowercase -= 1;
}
putchar('\n');
return (0);
}
