#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - run toward 98
 * Description:  prints all natural numbers from n to 98
 * @n: the beginning
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
}
