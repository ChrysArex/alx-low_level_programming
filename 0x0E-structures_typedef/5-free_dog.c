#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dogs
 * Description: function that frees dogs.
 * @d: pointer to the dog we want to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
