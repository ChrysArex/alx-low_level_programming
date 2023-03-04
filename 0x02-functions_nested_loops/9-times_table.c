#include "main.h"
/**
 * times_table- 9 time tables
 * Description:prints the 9 times table, starting with 0
 * Return: nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				printm(i * j);
			}
			else
			{
				printm(i * j);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
/**
 * printm - print the integer m
 * @m: integer we want to print
 * Return: nothing
 */
void printm(int m)
{
	if (m < 10)
	{
		_putchar(' ');
		_putchar('0' + m);
	}
	else
	{
		_putchar('0' + ((m - (m % 10))) / 10);
		_putchar('0' + (m % 10));
	}
}

