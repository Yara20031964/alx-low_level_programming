#include "main.h"
#include <stdlib>

/**
*create_array-print a string, followed by a new line
*@size:input
*@c:input
*Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == Null)
		return (0);

	while (size--)
		ptr[size] = c;
	return (ptr);
}
