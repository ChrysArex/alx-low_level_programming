#include "main.h"

/**
 * print_rev - print the reverse of string s
 * @s: The variable to reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{

	int l;
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	for (l = n; l >= 0; s--)
	{
		_putchar(*(s));
		l--;
	}
	_putchar('\n');
}
