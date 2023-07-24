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
if (argc > 3 || argc < 3)
{
printf("Error\n");
return (1);
}
else
{
int result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
}
