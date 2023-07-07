#include "main.h"
/**
 * _puts_recursion - write string
 * Description:  prints a string, followed by a new line
 * @s: The string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
			s++;
			_puts_recursion(s);
	}
	else
		_putchar('\n');

}
