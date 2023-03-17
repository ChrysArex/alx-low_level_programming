#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocat memory for an array
 * Description:  function allocates memory for an array of nmemb elements
 * @nmemb: size of the array
 * @size: number of bytes per elements
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return (ptr);
}

