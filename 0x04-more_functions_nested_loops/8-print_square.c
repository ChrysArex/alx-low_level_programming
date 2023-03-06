#include "main.h"
/**
 * print_square - square
 * Description: prints a square
 * @size: size of the square
 * Return: nothing
 */
void print_square(int size)
{
	int n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
