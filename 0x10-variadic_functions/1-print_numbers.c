#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 *
 * Description: function that prints numbers, separated by
 * the specified separator
 * @separator: the separator we want to apply between each number
 * @n: number of integer we want to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);
	printf("%d", va_arg(pa, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s%d", separator, va_arg(pa, int));
		else
			printf("%d", va_arg(pa, int));
	}
	va_end(pa);
	printf("\n");
}
