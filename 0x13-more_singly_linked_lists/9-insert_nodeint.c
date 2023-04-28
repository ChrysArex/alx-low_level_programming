#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that get the nth node
 * of a listint_t linked list.
 * @head: pointer to the head of the list
 * @idx: position of the element
 * @n: the value of the node
 * Return: returns the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ph = *head;
	listint_t *node = NULL;
	unsigned int np = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = ph->next;
		*head = node;
		return (node);
	}
	while (ph != NULL)
	{
		if (np == idx - 1)
		{
			node->next = ph->next;
			ph->next = node;
			return (node);
		}
		np++;
		ph = ph->next;
	}
	return (NULL);
}

