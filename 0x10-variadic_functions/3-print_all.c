#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print all parameters
 *
 * Description: function that prints all the parameters 
 * whatever they type is
 * @format: list of types of arguments passed to the function 
 * Return: nothing
 */
void print_all(const char * const format, ...)
{

	va_list pa;
	char *cp;

	va_start(ap, format);
	while (*pformat != '\0')
	{
		switch (*pformat)
		{
			case 'c':
				printf("%c", va_arg(pa, char));
			case 'i':
				printf("%i", va_arg(pa, int));
			case 'f':
				printf("%f", va_arg(pa, float));
			case 's':
				cp = va_arg(pa, char *);
				if (cp != NULL)
					printf("%s", va_arg(pa, char *));
				if (cp == NULL)
					printf("(nil)");
		}
		pformat++;
	}
}
