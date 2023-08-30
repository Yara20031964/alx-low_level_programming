
#include "main.h"

/**
*_pow_recursion - print a string, followed by a new line
*
*@x:input pointer of string
*
*@y:input pointer of string
*
*Return: Always 0 (Success)
*/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (0);
}
else if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (x);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
