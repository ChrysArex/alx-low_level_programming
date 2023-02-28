#include "main.h"
/**
 * swap_int - swap the value of two  initia variables
 * @a: The variable to swap
 * @b: second variable to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
