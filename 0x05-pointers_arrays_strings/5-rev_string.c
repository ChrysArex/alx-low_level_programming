#include "main.h"

/**
 * rev_string - reverse the string s
 * @s: The variable to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{

	char *k = s;
	int l;
	int n;
	char tmp;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	s--;
	for (l = 0; l < n / 2; l++)
	{
		tmp = *k;
		*k = *s;
		*s = tmp;
		k++;
		s--;
	}
}
