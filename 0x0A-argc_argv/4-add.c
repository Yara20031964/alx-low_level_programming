

 #include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
int j;
for (i = 1; i < argc; i++)
{
int size = strlen(argv[i]);
for (j = 0; j < size; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
}

for (i = 1; i < argc; i++)
{
mul += atoi(argv[i]);
}
printf("%d\n", mul);
return (0);

}
