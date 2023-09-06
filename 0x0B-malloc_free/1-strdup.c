#include "main.h"
#include <stdlib.h>

/**
* *_strdup - print a string, followed by a new line
*@srt:input
*Return: Always 0 (Success)
*/

char *_strdup(char *str)
{
	int size, i;

	if (str == NULL)
		return (0);
	for (size = 0; size != '\0'; size++)
		;
	char *ptr = malloc(size + 1);

	if (ptr == 0)
		return (0);
		for (i = 0; i < size; i++)
			str[i] = ptr[i];
	return (ptr);
