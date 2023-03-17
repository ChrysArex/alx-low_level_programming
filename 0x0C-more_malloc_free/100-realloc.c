#include <stdlib.h>
#include "main.h"
/**
 * smaller - find the smallest
 * Description: this function find the smallest number of tow int
 * @a: the first argument
 * @b: the second argument
 * Return: the smallest between a and b
 */
unsigned int smaller(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
/**
 * _realloc - rallocatng memory
 * Description: this function  rallocates memory using malloc and free
 * @ptr:pointer to the memory previously allocated
 * @old_size: the actual size of our memories cells
 * @new_size: the size want our memory have
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	for (i = 0; i < smaller(old_size, new_size); i++)
		*(ptr2 + i) = *((int*)(ptr) + i);
	free(ptr);
	return (ptr2);
}
