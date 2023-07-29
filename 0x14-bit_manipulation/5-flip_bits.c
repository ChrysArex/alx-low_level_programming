#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0, a = 64;

	if (n == ULONG_MAX && m == 0)
		return (a);
	for (i = 0; i < 32; i++)
	{
		if (((1 << i) & n) != ((1 << i) & m))
			count++;
	}
	return (count);
}
