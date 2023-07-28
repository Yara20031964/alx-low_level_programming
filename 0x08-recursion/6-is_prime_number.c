#include "main.h"

/**
*is_prime_number-print a string, followed by a new line
*@n:input
*@i:input
*Return: Always 0 (Success)
*/
int checkprime(int n, int i);
int is_prime_number(int n)
{
return (checkprime(n, 2));
}

/**
checkprime-print a string, followed by a new line
*@n:input
*@i:input
*Return: Always 0 (Success)
*/

int checkprime(int n, int i)
{
if (i == n)

return (1);

else if (n % 2)

return (square(n, i + 1));

else

return (-1);
}
