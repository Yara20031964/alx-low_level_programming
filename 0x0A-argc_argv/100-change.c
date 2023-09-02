#include <stdio.h>
#include <stdlib.h>
/**
 *fun - funcation that helo me to reduce line in main fun
 *@j: parameter input
 *
 * Return: Always 0 (Success)
 */

void fun(int j)
{
int i = 0;
if (j < 0)
printf("0\n");
else
{
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
j = j - 5;
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
printf("%d\n", i);
}
}

/**
 *main - Entry poin
 *@argc: 'the program's description'
 *@argv: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
int j = atoi(argv[1]);
if (argc == 2)
{
fun(j);
}
else if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
return (0);
}
