#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - sum all the data (n) of a dlistint_t linked list
 * @head: the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *mov = head;
	unsigned int count = 0;

	while (mov)
	{
		count++;
		mov = mov->next;
	}
	if (count == 0)
		return (0);
	count = 0;
	mov = head;
	while (mov)
	{
		count += mov->n;
		mov = mov->next;
	}
	return (count);
}
