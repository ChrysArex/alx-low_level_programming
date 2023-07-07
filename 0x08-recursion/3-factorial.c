#include "main.h"

/**
 * factorial - the factorial
 * Description:  returns the factorial of a given number.
 * @n: The number we want the factorial
 * Return: the factorial of n
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
