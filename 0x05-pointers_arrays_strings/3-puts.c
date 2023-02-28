#include "main.h"
/**
 * _puts - print the string str
 * @str: The variable to print
 * Return: nothing
 */
void _puts(char *str)
{

	int n;

	for (n = 0; *str != '\0'; str++)
	{
		_putchar(*(str));
		n++;
	}
	_putchar('\n');
}
