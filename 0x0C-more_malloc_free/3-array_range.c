#include "main.h"

/**
 * array_range - duplicate to new memory space location
 * @min: char
 * @max: char
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i;
	char *ptr;

	if (min > max)
		return (0);
	ptr = malloc((max - min) + 1);
	if (ptr == 0)
		return (0);
	for (i = 0; i <= (max - min) + 1; ++i)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
