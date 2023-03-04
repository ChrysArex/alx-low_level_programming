#include "main.h"
/**
 * print_last_digit - last digit on n
 * Description: find the last digite
 * @n: the integer we want the last digit from
 * Return: the last digite on n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' + -1 * (n % 10));
		return (-1 * (n % 10));
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
