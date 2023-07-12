#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - freeing matrix
 * @grid: matrix being passed
 * @height: freeing using this variable
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
