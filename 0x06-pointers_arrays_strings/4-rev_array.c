#include "main.h"
/**
 *reverse_array - reverse an array
 * @n: size of the array
 * @a: the array we want the reverse
 *
 * Return: pointer on the copie of src string
 */
void reverse_array(int *a, int n)
{
	int *pa = a;
	int *pa2 = a;
	int c;

	for (c = 0; c < n; c++)
		pa++;
	for (; pa >= a; pa--)
	{
		*pa2 = *pa;
		pa2++;
	}
}
