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
	char *ps = s;
	int i = 0;

	for (; *ps != '\0'; ps++)
	{
		if (*ps == c)
		{
			i = 1;
			break;
		}
	}
	if (i == 0)
		return (NULL);
	else
		return (ps);
}

