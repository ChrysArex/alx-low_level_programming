#include "main.h"
/**
 * print_diagonal - diagonal
 * Description: draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: 1 for lowercase, 0 otherwise
 */
void print_diagonal(int n)
{
	int c, m;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (m = 0; m < c ; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
