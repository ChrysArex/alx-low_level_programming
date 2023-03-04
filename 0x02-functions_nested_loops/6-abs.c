#include "main.h"
/**
 * _abs - absolute value
 * Description: return the absolute value
 * @n: the number which absolute value we want
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
