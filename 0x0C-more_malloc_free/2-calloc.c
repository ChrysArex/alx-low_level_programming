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
	void *ptr;
	if (nmemb == 0 || size == 0)
		return (ptr = NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
