#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of a string
 * Description: allocate space in memory, with a copy of the string given.
 * @str: The string we want to copy
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *pstr;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	i++;
	pstr = malloc(i);
	if (pstr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		*(pstr + j) = *(str + j);
	return (pstr);
}
