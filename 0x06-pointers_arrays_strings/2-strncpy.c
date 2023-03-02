#include "main.h"
/**
 * _strncpy - copy the string src in dest
 * @dest: where the src string will be copied
 * @src: the string to be copied
 *
 * Return: pointer on the copie of src string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pdest = dest;
	char *psrc = src;
	int c;

	for (c = 0; c < n; c++)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
