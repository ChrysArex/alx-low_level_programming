#include "main.h"
/**
 * _strncat - concatenate two characters
 * @dest: where the src string will be add at
 * @src: the string we will add
 * @n: number of char of src we will add
 *
 * Return: pointer on the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pdest = dest;
	char *psrc = src;
	int c = 0;

	for (; *pdest != '\0'; pdest++)
		;
	while (c < n)
	{
		*pdest = *psrc;
		psrc++;
		pdest++;
		c++;
	}
	*pdest = '\0';
	return (dest);
}
