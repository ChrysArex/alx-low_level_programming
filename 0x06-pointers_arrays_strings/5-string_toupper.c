#include "main.h"
#include <ctype.h>
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@low: string to change in uppercase
 * Return: pointer to the new string
 */
char *string_toupper(char *low)
{
	char *p = low;

	for (; *p != '\0'; p++)
		*p = toupper(*p);
	return (low);
}
