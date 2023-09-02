#include <stdio.h>

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
int mul;
if (argc == 3)
{
mul = atoi(argv[1] * argv[2];
printf("%d\n", mul)
}
else
printf("Error\n")
return (0);
}
