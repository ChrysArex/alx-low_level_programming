#include "main.h"
/**
 *reverse_array - reverse an array
 * @n: size of the array
 * @a: the array we want the reverse
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *pa = a;
	int *pa2 = a;
	int c, inter;

	for (c = 1; c < n; c++)
		pa++;
	if (n % 2 != 0)
	{
		for (c = 1; c <= n / 2 + 1; c++)
		{
			if (*pa != *pa2)
			{
				inter = *pa2;
				*pa2 = *pa;
				*pa = inter;
				pa2++;
				pa--;
			}
		}
	}
	else if (n % 2 == 0)
	{
		for (c = 1; c <= n / 2; c++)
		{
			if (*pa != *pa2)
			{
				inter = *pa2;
				*pa2 = *pa;
				*pa = inter;
				pa2++;
				pa--;
			}
		}
	}
}
