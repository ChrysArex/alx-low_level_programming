#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array
 * Description: a pointer to a 2 dimensional array of integers.
 * @width: The number of column
 * @height: the number of row
 * Return: a pointer to the 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **p2a;
	int *pl;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p2a = malloc(height);
	if (p2a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(p2a + i) = malloc(width);
		if (*(p2a + i) == NULL)
			return (0);
		*pl = *(p2a + i);
		for (j = 0; j < width; j++)
			*(pl + j) = 0;
	}
	return (p2a);
}
