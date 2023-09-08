#include "main.h"

/**
 * _calloc - duplicate to new memory space location
 * @nmemb: char
 * @size: char
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == 0 || nmemb == 0 || size == 0)
		return (0);
	for (i = 0; i < nmemb * size; ++i)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
