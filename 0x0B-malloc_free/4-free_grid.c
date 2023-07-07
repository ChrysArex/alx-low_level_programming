#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional array
 * Description: frees a 2 dimensional grid
 * @grid: The 2 dimentional array
 * @height: the number of row
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
