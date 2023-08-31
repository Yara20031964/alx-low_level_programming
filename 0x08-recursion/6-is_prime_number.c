#include "main.h"
#include <stdio.h>

/**
*is_prime_number-print a string, followed by a new line
*@n:input
*@othrn:input
*Return: Always 0 (Success)
*/
int ch_prime(int n, int othrn);
int is_prime_number(int n)
{
return (ch_prime(n, 2));
}

/**
*ch_prime a string, followed by a new line
*@n:input
*othrn:input
*Return: Always 0 (Success)
*/

int ch_prime(int n, int othrn);
{
if (othrn >= n && n > 1)

return (1);

else if (n % othrn == 0 || n <=1)

return (0);

else

return (ch_prime(ch_prime(n, othrn + 1));
}
