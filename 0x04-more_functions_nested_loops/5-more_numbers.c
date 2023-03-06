#include "main.h"
/**
 * more_numbers - print numbers
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int n, m;
	char i;
	unsigned char t[10] = "1011121314";

	for (n = 1; n <= 10; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		for (m = 0; m < 10; m++)
		{
			_putchar(t[m]);
		}
		_putchar('\n');
	}
}
