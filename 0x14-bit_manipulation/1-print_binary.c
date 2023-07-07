#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: the number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int prev_div, check = 0, div = n;

	if (n == 0)
		_putchar('0');
	else
	{
		while (1)
		{
			for (; div != check; )
			{
				prev_div = div;
				div = div >> 1;
				/*printf("div = %li\n", div);*/
			}
			check = prev_div;
			_putchar('0' + (prev_div - (2 * div)));
			if (check == n)
				break;
			div = n;
			/*printf("check = %li\n", check);*/
		}
	}
}

