#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *@argc: 'the program's description'
 *@argv: describe the parameter
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
int mul = 0;
int i;
for (i = 1; i < argc; i++)
{
if (*argv[i] < '0' || *argv[i] > '9')
{
printf("Error\n");
return (1);
}
}

for (i = 1; i < argc; i++)
{
mul += atoi(argv[i]);
}
printf("%d\n", mul);
return (0);
}
