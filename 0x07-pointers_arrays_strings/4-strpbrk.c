#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - search a string
 * Description: function locates the first occurrence in the string s
 * @s: where we search
 * @accept: accepted bytes
 *
 * Return: a pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ps = s;
	char *pacc = accept;
	int i = 0;

	for (; *ps != '\0'; ps++)
	{
		for (; *pacc != '\0'; pacc++)
		{
			if (*ps == *pacc)
			{
				i = 1;
				break;
			}
		}
		pacc = accept;
		if (i == 1)
			break;
	}
	if (i == 1)
		return (ps);
	else
		return (NULL);
}
