#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 *
 * Description: function that prints strings, separated by
 * the specified separator
 * @separator: the separator we want to apply between each string
 * @n: number of string we want to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *cp;

	va_start(pa, n);
	printf("%s", va_arg(pa, char *));
	for (i = 1; i < n; i++)
	{
		cp = va_arg(pa, char *);
		if (separator != NULL)
		{
			if (cp == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, cp);
		}
		else
		{
			if (cp == NULL)
				printf("(nil)");
			else
				printf("%s", cp);
		}
	}
	va_end(pa);
	printf("\n");
}
