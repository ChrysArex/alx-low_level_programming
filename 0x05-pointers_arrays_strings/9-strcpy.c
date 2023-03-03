#include "main.h"

/**
 *_strcpy -copies the string pointed to by src
 *@src: string to be copied
 *@dest: where src must be copied
 * Return: pointer to the dest string
 */
char *_strcpy(char *dest, char *src)
{
	char *pdest = dest;
	char *psrc = src;

	for (; *psrc != '\0'; psrc++)
	{
		*pdest = *psrc;
		pdest++;
	}
	*pdest = *psrc;
	return (dest);
}
