#include <stdio.h>
/**
* main - this is the entry point
* Description: execute the task mentioned in the readme.md
* Return: return 0 for success
*/
int main(void)
{
	int b;

	for (b = 97; b <= 122; b++)
		putchar(b);
	for (b = 65; b <= 90; b++)
		putchar(b);
	putchar(10);
	return (0);
}
