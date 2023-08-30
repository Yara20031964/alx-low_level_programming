
#include "main.h"

/**
*_strlen_recursion - print a string, followed by a new line
*
*@s:input pointer of string
*
*Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
int cont = 0;
if (*s > '\0')
{
_strlen_recursion(s + 1);
++cont;
}
return (cont);
}
