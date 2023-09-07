#include "main.h"

/**
 *malloc_checked - Entry point
 *
 *@b: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
