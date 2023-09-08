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
	int *ptr;

	if (min > max)
		return (0);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == 0)
		return (0);
	for (i = 0; min <= max; ++i)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
