#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function to free memory.
 * @grid: pointer to grid of int type.
 * @height: int type.
 *
 * Return: ...
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
