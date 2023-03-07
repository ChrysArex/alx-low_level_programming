#include "main.h"
#include <stddef.h>

/**
 * _strchr - search character
 * Description: Returns a pointer to the first occurrence of c
 * @s: the string where we search c
 * @c: the char we want the search
 *
 * Return: a pointer to s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}

