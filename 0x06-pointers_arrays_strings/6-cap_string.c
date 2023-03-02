#include "main.h"
#include <ctype.h>
/**
 *check - verify if the character is not a words separator
 *@val: the character to check
 *Return: 0 if it is a words separator 1 otherwise
 */
int check(char val)
{
	int n, v = 1;
	char sw1[7] = {' ', '\t', '\n', ',', ';', '.', '!'};
	char sw2[7] = {'?', '"', '(', ')', '{', '}', '\0'};

	for (n = 0; n < 7; n++)
	{
		if (val == sw1[n] || val == sw2[n])
		{
			v = 0;
			break;
		}
	}
	return (v);
}
/**
 *cap_string - capitalizes all words of a string
 *@str: the string from where words will be capitalize
 * Return: pointer to the capitalized string
 */

char *cap_string(char *str)
{
	char *pstr = str;

	if (check(*pstr))
		*pstr = toupper(*pstr);
	pstr++;
	for (; *pstr != '\0'; pstr++)
	{
		if (check(*pstr) && !check(*(pstr - 1)))
			*pstr = toupper(*pstr);
	}
	return (str);
}

