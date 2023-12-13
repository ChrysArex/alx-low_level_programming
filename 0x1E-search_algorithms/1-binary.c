#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if it fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t begin = 0;
	size_t end = size - 1;
	size_t middle;

	if (!array)
		return (-1);
	while (begin <= end)
	{
		printf("Searching in array: ");
		for (i = begin; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = (begin + end) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			end = middle - 1;
		else
			begin = middle + 1;
	}
	return (-1);
}
