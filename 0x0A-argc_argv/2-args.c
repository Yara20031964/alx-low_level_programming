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
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
