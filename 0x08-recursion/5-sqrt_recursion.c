#include "main.h"

/**
*_sqrt_recursion-print a string, followed by a new line
*@n:input
*@i:input
*Return: Always 0 (Success)
*/
int square(int n, int i);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
*square-print a string, followed by a new line
*@n:input
*@i:input
*Return: Always 0 (Success)
*/

int square(int n, int i)
{
if (i * i == n)

return (i);

else if (i * i < n)

return (square(n, i + 1));

else

return (-1);
