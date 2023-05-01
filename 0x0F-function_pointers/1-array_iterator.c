#include <stddef.h>
/**
 * array_iterator - function on multiple element
 * Description: function that executes a function
 * given as a parameter on each element of an array.
 * @array: pointer to the array of element
 * @size: number of element in the array
 * @void (*action)(int): function pointer to the funtion
 * we want to apply on each element of the array
 * @action: the function we will use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(*(array + a));
}

