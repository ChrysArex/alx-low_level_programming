#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocatng memory
 * Description: this function  allocates memory using malloc
 * @b: size of the array
 * Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
