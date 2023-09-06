#include "main.h"
#include <stdlib.h>

/**
* *_strdup-print a string, followed by a new line
* @srt: input it is a parameter
* Return: Always 0 (Success)
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
			str[i] = ptr[i];

	return (ptr);
}
