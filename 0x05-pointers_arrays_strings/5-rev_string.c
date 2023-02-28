#include "main.h"

/**
 * rev_string - reverse the string s
 * @s: The variable to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{

	char *k;
	int l;
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	for (l = n-1; l >= 0; s--)
	{
		*k++ = *s;
		l--;
	}
	s = k;
}
