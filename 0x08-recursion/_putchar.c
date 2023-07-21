#include "main.h"
#include <unistd.h>

/**
 *main - Entry point
 *
 *Description: "A c program that display by using printf"
 *
 *Return: Always 0 (Success)
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}

