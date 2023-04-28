#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that get the nth node
 * of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: position of the element
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ph = head;
	listint_t *node = NULL;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (ph != NULL)
	{
		if (n == index)
			return (node = ph);
		n++;
		ph = ph->next;
	}
	return (NULL);
}
