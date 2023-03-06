#include "main.h"
/**
 * print_triangle - make a triangle
 * Description:prints a triangle
 * @size: the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int n, c, i;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (c = size - 1; c >= n; c--)
				_putchar(' ');
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
