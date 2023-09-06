#include "main.h"
#include <stdlib.h>

/**
 * free_grid - duplicate to new memory space location
 * @grid: char
 * @height: char
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
