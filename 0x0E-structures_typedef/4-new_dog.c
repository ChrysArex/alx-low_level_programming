#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creation of a new dog
 * Description:function that creates a new dog.
 * @name: the name we want to assigne
 * @age: the age we want to assigne
 * @owner: the owner we want to assigne
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
