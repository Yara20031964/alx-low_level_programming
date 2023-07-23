#include "main.h"

/**
* _pow_recursion-print a string, followed by a new line
*@y:input
*@x:input
*Return: Always 0 (Success)
*/

int _pow_recursion(int x, int y);

{

if (y < 0)

return (-1);

else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, (y - 1)));
}
