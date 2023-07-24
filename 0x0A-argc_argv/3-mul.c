#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: "A c program that display by using printf"
 *
 *@argc : input
 *
 *@argv : input
 *
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc > 2 || argc < 2)
{
printf("Error\n");
return (1);
}
else
printf("%d\n", atoi(argv[0]) * atoi(argv[1]);
return (0);
}
