#include "main.h"
/**
 * print_line - print a line
 * Description: draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
