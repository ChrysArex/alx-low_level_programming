#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an sorted array of integers
 * using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if it fail
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t begin = 0;
	size_t step = sqrt(size);
	size_t end = 0;

	if (!array)
		return (-1);
	while (end <= (size - 1))
	{
		if (array[end] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", begin, end);
			for (i = begin; i <= end; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		begin = end;
		end += step;
	}
	return (-1);
}
