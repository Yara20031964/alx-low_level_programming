#include "main.h"

/**
*_strlen_recursion-print a string, followed by a new line
*@s:input
*Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
int ntr = 0;
if (*s > '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}
