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
int i = 0;
if (argc == 0)
{
printf("Error\n");
return (1);
}
else
{
int j = atoi(argv[1]);
while (j != 0)
{
if (j >= 25)
{
j = j - 25;
++i;
}
else if (j >= 10)
{
j = j - 10;
++i;
}
else if (j >= 5)
{
j = atoi(argv[1]) - 5;
++i;
}
else if (j >= 2)
{
j = j - 2;
++i;
}
else if (j >= 1)
{
j = j - 1;
++i;
}
}
}
printf("%d\n", i);
return (0)
}
