#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dim int grid by malloc.
 * Description: Each element initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to the new grid
 */

int **alloc_grid(int width, int height)
{
	int **z;
	int x;
	int y;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	z = malloc(height * sizeof(*z));
	if (z == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		z[x] = malloc(width * sizeof(**z));
		if (z[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(z[x]);
			free(z);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			z[x][y] = 0;
	}

	return (z);
}
