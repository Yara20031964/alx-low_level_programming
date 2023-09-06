#include "main.h"
#include <stdlib.h>

/**
 * str_concat - duplicate to new memory space location
 * @s1: char
 * @s2: char
 * Return: 0
 */


char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ptr;

	if (str == 0)
		return (0);
	for (size1 = 0; str[size1] != '\0'; size1++)
		;
	for (size2 = 0; str[size2] != '\0'; size2++)
	;
	ptr = malloc((size1 + size2) + 2);

	if (ptr == 0)
		return (0);
	for (i = 0; i < size1 + size2; i++)
	{
		if (i <= size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	return (ptr);
}
