#include "main.h"
#include <ctype.h>
/**
 *rot13- capitalizes all words of a string
 *@str: the string from where words will be capitalize
 * Return: pointer to the capitalized string
 */
char *rot13(char *s)
{
	char *ps = s;

	for (; *ps != '\0'; ps++)
	{
		if (isupper(*ps))
		{
			if (atoi(*ps) + 13 > atoi('Z'))
			{
				*ps = atoi('A') + ((atoi(*ps) + 13) - atoi('Z'));
			}
			else
			{
				*ps = atoi(*ps) + 13;
			}
		}
		else
		{
			if (atoi(*ps) + 13 > atoi('Z'))
			{
				*ps = atoi('A') + ((atoi(*ps) + 13) - atoi('Z'));
			}
			else
			{
				*ps = atoi(*ps) + 13;
			}
		}
	}
	return (s);
}



