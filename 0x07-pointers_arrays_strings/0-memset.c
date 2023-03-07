#include "main.h"

/**
 * _memset- fill memorie
 * Description: fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes of the memory area
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;
	char *ps = s;

	for (c = 0; c < n; c++)
	{
		*ps = b;
		ps++;
	}
	return (s);
}
