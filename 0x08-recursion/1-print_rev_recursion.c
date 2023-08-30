
#include "main.h"

/**
*_print_rev_recursion - print a string, followed by a new line
*
*@s:input pointer of string
*
*Return: Always 0 (Success)
*/

void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
