#include "main.h"
#include <stdlib.h>

/**
 * create_array - array of char
 * Description: creates an array of chars, and initializes it.
 * @c: The character used for initialisation
 * @size: the size we want the array have
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *pc = malloc(size);
	unsigned int i;

	if (size == 0 || pc == NULL)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
			*(pc + i) = c;
	}
	return (pc);
}
