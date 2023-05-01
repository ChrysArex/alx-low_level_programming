#include <stdarg.h>
/**
 * sum_them_all - sum integers
 *
 * Description: function that returns the sum of all its parameters
 * @n: number of integer we want to sum
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(pa, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);
	va_end(pa);
	return (sum);
}
