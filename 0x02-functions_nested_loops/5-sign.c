#include "main.h"
/**
 * print_sign - signe checker
 * Description: check the signe of n
 * @n: the value to check
 * Return: 1 for signe +, 0 for 0, and -1 for negatives
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
