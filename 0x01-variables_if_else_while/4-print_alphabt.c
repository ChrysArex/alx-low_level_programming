#include <stdio.h>
/**
* main - this is the entry point
* Description: execute the task mentioned in the readme.md
* Return: return 0 for success
*/
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		if (n != 101 && n != 113)
			putchar(n);
	putchar(10);
	return (0);
}
