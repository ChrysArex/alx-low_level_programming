#include "main.h"
/**
 *puts_half - capitalizes all words of a string
 *@str: half of this string must be print
 * Return: pointer to the capitalized string
 */
void puts_half(char *str)
{
	char *pstr = str;
	int n;

	for (; *pstr != '\0'; pstr++)
		n++;
	pstr = str;
	if (n % 2 == 0)
	{
		pstr += n / 2;
		for (; *pstr != '\0'; pstr++)
			_putchar(*pstr);
	}
	else
	{
		pstr += n / 2 + 1;
		for (; *pstr != '\0'; pstr++)
			_putchar(*pstr);
	}
	_putchar('\n');
}
