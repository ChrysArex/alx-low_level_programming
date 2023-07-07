#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - writes string
 * Description:  prints a string in reverse.
 * @s: the string to reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int n = strlen(s);

	s += n - 1;
	if (n != 0)
	{
		s += n -1;
		_putchar(*s);
		*s = '\0';
		_print_rev_recursion(s -= n - 1);
    }
}
