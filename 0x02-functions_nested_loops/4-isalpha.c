#include "main.h"
/**
 * _isalpha - letter checker
 * Description: check if an input is a letter
 * @c: the char to check
 * Return: 1 for letters, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
