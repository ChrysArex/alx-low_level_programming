#include "main.h"
/**
 * print_times_table - time tables
 * @n: finale table
 * Description: prints the n times table, starting with 0
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == n)
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
	else if (m >= 10 && m < 100)
	{
		_putchar(' ');
		_putchar('0' + ((m - (m % 10))) / 10);
		_putchar('0' + (m % 10));
	}
	else
	{
		_putchar('0' + ((m - (m % 100))) / 100);
		_putchar('0' + (((m % 100) - (m % 10))) / 10);
		_putchar('0' + (m % 10));
	}
}
