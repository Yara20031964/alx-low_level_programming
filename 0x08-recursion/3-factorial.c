#include "main.h"

/**
*factorial-print a string, followed by a new line
*@n:input
*Return: Always 0 (Success)
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
