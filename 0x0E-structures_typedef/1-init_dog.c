#include "dog.h"
/**
 * init_dog - initialization of a dog struct
 * Description: function that initialize a variable of type struct dog
 * @d: poiter to the dog we want to initialize
 * @name: the name we wan to assigne
 * @age: the age we want to assigne
 * @owner: the owner we want to assigne
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
