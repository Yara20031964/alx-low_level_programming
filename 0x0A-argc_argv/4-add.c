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
int sum = 0
char *c;

while (--argc)
{
for (argv[argc]; *c; ++c)

if (*c < '0' || *c > '9')
return (printf("Error\n", 1));
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);

}
