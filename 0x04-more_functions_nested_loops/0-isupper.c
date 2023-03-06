#include "main.h"
/**
 * _isupper - check if c is uppercase
 * Description: check if an input is a upercase
 * @c: the char to check
 * Return: 1 for uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
