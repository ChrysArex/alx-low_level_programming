#include "main.h"
/**
 * _strcat - concatenate two characters
 * @dest: where the src string will be add at
 * @src: the string we will add
 *
 * Return: pointer on the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *pdest = dest;
	char *psrc = src;

	for (; *pdest != '\0'; pdest++)
		;
	while (*psrc != '\0')
	{
		*pdest = *psrc;
		psrc++;
		pdest++;
	}
	return (dest);
}




