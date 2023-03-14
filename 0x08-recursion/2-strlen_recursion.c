#include "main.h"

/**
 * _strlen_recursion - length of a string.
 * Description: return the length of a string
 * @s: The string to count
 * Return: the length of s.
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	char *p = s;

	if (*p != '\0')
	{
		n++;
		p++;
		return (n + _strlen_recursion(p));
	}
	else
		return (n);
}
