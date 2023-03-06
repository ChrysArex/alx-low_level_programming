#include <stdio.h>
#include "main.h"
/**
 * main - fizz-buzz
 * Description: print fizz for multiple of 3 and buzz for 5
 * Return: 0 for success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0 && !(n % 5 == 0))
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && !(n % 3 == 0))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
