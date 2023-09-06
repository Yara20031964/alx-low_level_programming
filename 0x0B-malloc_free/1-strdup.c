#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */


char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == 0)
		return (0);
	for (size = 0; str[size] != '\0'; size++)
	;
	ptr = malloc(size + 1);

	if (ptr == 0)
		return (0);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
