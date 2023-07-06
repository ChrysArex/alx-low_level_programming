#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number 
 *
 * Return: the converted number
 */

void print_binary(unsigned long int n)
{
	int rest, quotient, check = 0, div = n;

	while (check <= n)
	{
		for (; div != check; )
		{
			div >> 1;
			quotient = div;
			rest = div - (2 * quotient);
		}
		check = div;
		_putchar('0' + rest);
		quotient = n
	}
}

