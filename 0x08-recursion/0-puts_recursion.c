#include "main.h"

/**
 *main - Entry point
 *
 *Description: "A c program that display by using printf"
 *
 *Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

