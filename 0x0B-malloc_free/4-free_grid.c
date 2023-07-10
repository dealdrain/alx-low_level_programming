#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free a 2 dimensional grid previously created.
  * @grid: the address of the two dimensional grid
  * @height: height of the grid
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}

