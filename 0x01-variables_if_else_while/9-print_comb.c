#include <stdio.h>
/**
* main - this is the entry point
* Description: execute the task mentioned in the readme.md
* Return: return 0 for success
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
