#include "main.h"
/**
 * _isdigit - check if c is a digit
 * Description: check if an input is a digit
 * @c: the char to check
 * Return: 1 for digits, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}
