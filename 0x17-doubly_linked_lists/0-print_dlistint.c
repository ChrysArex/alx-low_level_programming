#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print all element in a dlistint_t
 * @h: the head of the list
 * Return: the number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *mov = h;
	size_t count = 0;

	while (mov)
	{
		printf("%i\n", mov->n);
		count++;
		mov = mov->next;
	}
	return (count);
}
