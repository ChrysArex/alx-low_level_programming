#include <stdlib.h>
#include "main.h"
/**
 * array_range - array of int
 * Description: this function  creates an array of integers.
 * @min: the starting number
 * @max: the last number
 * Return:a pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = (int *) malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		*(ptr + i) = min + i;
	return (ptr);
}
