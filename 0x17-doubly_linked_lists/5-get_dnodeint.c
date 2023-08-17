#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: index of the node we want
 * Return: the node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *mov = head;
	unsigned int count = 0;

	while (mov)
	{
		count++;
		mov = mov->next;
	}
	if (index >= count)
		return (NULL);
	count = 0;
	mov = head;
	for (; count < index; count++)
		mov = mov->next;
	return (mov);
}

