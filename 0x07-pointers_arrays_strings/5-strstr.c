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
	while (*haystack != '\0')
	{
		char *duplicate = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (!*needle != '\0')
		{
			return (duplicate);
		}
		haystack++;
	}
	return (0);
}
