#include "main.h"
#include <ctype.h>
/**
 *leet- encodes a string into 1337
 *@s: the string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char *ps = s;
	char val[5] = {'a', 'e', 'o', 't', 'l'};
	char code[5] = {'4', '3', '0', '7', '1'};
	int n;

	for (; *ps != '\0'; ps++)
	{
		for (n = 0; n < 5; n++)
		{
			if (*ps == val[n] || *ps == toupper(val[n]))
				*ps = code[n];
		}
	}
	return (s);
}


