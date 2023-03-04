#include "main.h"
/**
 * jack_bauer - timer
 * Description: print the time from 00:00 to 23:59
 * Return: nothing
 */
void jack_bauer(void)
{
	int n, m;

	for (n = 0; n < 24; n++)
	{
		for (m = 0; m < 60; m++)
		{
			if (n < 10)
			{
				_putchar('0');
				_putchar('0' + n);
				_putchar(':');
				if (m < 10)
				{
					_putchar('0');
					_putchar('0' + m);
					_putchar('\n');
				}
				else
				{
					_putchar('0' + ((m - (m % 10))) / 10);
					_putchar('0' + (m % 10));
					_putchar('\n');
				}
			}
			else
			{
				_putchar('0' + ((n - (n % 10))) / 10);
				_putchar('0' + (n % 10));
				_putchar(':');
				if (m < 10)
				{
					_putchar('0');
					_putchar('0' + n);
					_putchar('\n');
				}
				else
				{
					_putchar('0' + ((m - (m % 10))) / 10);
					_putchar('0' + (m % 10));
					_putchar('\n');
				}
			}
		}
	}
}
