#include "main.h"
/**
 * _islower - check if c is lowercase
 * Description: check if an input is a lowercase
 * @c: the char to check
 * Return: 1 for lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
