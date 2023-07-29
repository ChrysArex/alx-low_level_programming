#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number
 * @index: position of the bit
 * Return: the value of the nth bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
