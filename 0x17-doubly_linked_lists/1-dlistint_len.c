#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - count the element in a dlistint_t
 * @h: the head of the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *mov = h;
	size_t count = 0;

	while (mov)
	{
		count++;
		mov = mov->next;
	}
	return (count);
}
