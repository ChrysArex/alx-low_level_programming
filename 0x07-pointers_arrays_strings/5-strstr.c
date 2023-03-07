#include "main.h"

/**
 * _strstr - find a string
 * Description: finds the first occurrence of a substring
 * @haystack: where we search
 * @needle: what we search
 *
 * Return: a pointer to the fist occurrence, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
