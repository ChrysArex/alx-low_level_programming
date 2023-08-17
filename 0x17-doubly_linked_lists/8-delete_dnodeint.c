#include <stdlib.h>
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

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: head of the list
 * @index: the index we want to add the node at
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_1, *node_2, *node_3;
	dlistint_t *mov = *head;
	unsigned int count = 0;

	while (mov)
	{
		count++;
		mov = mov->next;
	}
	if (index >= count)
		return (-1);
	else if (index == 0)
	{
		(*head)->next->prev = NULL;
		mov = *head;
		(*head) = (*head)->next;
		free(mov);
		return (1);
	}
	else if (index == count - 1)
	{
		node_1 = get_dnodeint_at_index(*head, index);
		node_1->prev->next = NULL;
		free(node_1);
		return (1);
	}
	node_1 = get_dnodeint_at_index(*head, index - 1);
	node_2 = get_dnodeint_at_index(*head, index);
	node_3 = get_dnodeint_at_index(*head, index + 1);
	node_1->next = node_2->next;
	node_3->prev = node_2->prev;
	free(node_2);
	return (1);
}

