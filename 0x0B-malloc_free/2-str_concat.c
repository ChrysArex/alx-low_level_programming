#include "main.h"

#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * Description: allocate space in memory which contains the contents of s1.
 * @s1: The first string
 * @s2: the second string
 * Return: a pointer to a newly allocated space in memory containing s1
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	j++;
	concat = malloc(i + j);
	if (concat == NULL)
		return (NULL);
	k = 0;
	l = 0;
	while (k < i + j)
	{
		if (k < i)
			*(concat + k) = *(s1 + k);
		if (k >= i)
		{
			*(concat + k) = *(s2 + l);
			l++;
		}
		k++;
	}
	return (concat);

}
