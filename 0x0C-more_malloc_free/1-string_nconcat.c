#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - duplicate to new memory space location
 * @s1: char
 * @s2: char
 * @n : input
 * Return: 0
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, i, j;
	char *ptr;

	for (size1 = 0; s1[size1] != '\0'; size1++)
	;
	for (size2 = 0; s2[size2] != '\0'; size2++)
	;
	if (n < size2)
		ptr = malloc((size1 + n + 1));
	else
		ptr = malloc((size1 + size2 + 1));

	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	if (n < size2)
	{
		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			++i;
		}
	}
	else
	{
		for (j = 0; j < size2; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
