#include "main.h"
#include <stdio.h>
/**
 *print_array - print n element of an array of integers
 *@a: pointer to the array
 *@n: number of element to display
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int *pa = a, c;

	for (c = 0; c < n; c++)
	{
		if (c != 0)
		{
			printf(", %d", *pa);
			pa++;
		}
		else
		{
			printf("%d", *pa);
			pa++;
		}
	}
	printf("\n");
}

