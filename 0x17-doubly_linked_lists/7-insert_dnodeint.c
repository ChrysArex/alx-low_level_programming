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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list
 * @idx: the index we want to add the node at
 * @n: value of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_1, *node_2;
	dlistint_t *new, *mov = *h;
	unsigned int count = 0;

	while (mov)
	{
		count++;
		mov = mov->next;
	}
	if (idx == 0 || idx >= count)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	node_1 = get_dnodeint_at_index(*h, idx - 1);
	node_2 = get_dnodeint_at_index(*h, idx);
	new->n = n;
	new->prev = node_1;
	new->next = node_2;
	node_1->next = new;
	node_2->prev = new;
	return (new);
}
