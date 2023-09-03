#include "main.h"

/**
* _puts - Write a function that prints a string, followed by a new line, to
* stdout.
*
* @str: This is my input string
* Return: no return
*/
void _puts(char *str)
{
int index;
for (index = 0; str[index]; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
