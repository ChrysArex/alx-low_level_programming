#include <stddef.h>
#include "main.h"
/**
 * _strlen - return the length of s
 * @s: The variable to count
 * Return: nothing
 */
int _strlen(const char *s)
{
	unsigned int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}

/**
 * _pow - calculate the power
 * Description:  returns the value of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: the value of x power y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int val = 1;

	if (y == 0)
		return (1);
	for (; y != 0; y--)
		val *= x;
	return (val);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, exp, digit;
	const char *cp_b = b;

	if (b == NULL)
		return (0);
	for (; *cp_b != '\0'; cp_b++)
	{
		if ((*cp_b != '0') && (*cp_b != '1'))
			return (0);
	}
	cp_b = b;
	for (; *cp_b != '\0'; cp_b++)
	{
		exp = _strlen(cp_b) - 1;
		digit = *cp_b - '0';
		val += _pow(2, exp) * digit;
	}
	return (val);
}




