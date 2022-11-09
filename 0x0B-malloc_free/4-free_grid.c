#include "main.h"
#include <stdlib.h>

/**
* free_grid - prints a grid of integers
* @grid: the addresses of the 2D grid.
* @height: height of the grid
*
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

