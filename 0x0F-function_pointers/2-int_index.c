/**
 * int_index - function that searches for an integer.
 * Description: function that returns the index
 * of the first element for which the cmp function does not return 0
 * @array: Pointer to the array of element we want to apply
 * the cmp function on
 * @size: number of element of the array
 * @void (*cmp)(int): function pointer to to funtion we want to apply
 * on each element of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b = -1;

	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(*(array + a)) != 0)
		{
			b = a;
			break;
		}
	}
	return (b);
}
