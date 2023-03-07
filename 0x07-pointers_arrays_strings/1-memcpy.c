#include "main.h"

/**
 * _memcpy -copies memory area
 * Description:  function copies n bytes from memory area src to dest
 * @src: where we copy from
 * @dest: where the data is copied
 * @n: number of copie
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;
	char *pdest = dest;
	char *psrc = src;

	for (c = 0; c < n; c++)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
