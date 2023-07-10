#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the two dimensional grid
 * @grid: dimennsion to be freed
 * @height: dimension height
 * Return: null on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
