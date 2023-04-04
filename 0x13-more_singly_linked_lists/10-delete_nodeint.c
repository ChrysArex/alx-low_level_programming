#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: position of the element
 * Return: returns the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ph = *head;
	listint_t *node;
	unsigned int np = 0;

	if (index == 0)
	{
		if (*head == NULL)
			return (1);
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (ph != NULL)
	{
		if (np == index - 1)
		{
			node = ph->next;
			ph->next = node->next;
			free(node);
			return (1);
		}
		np++;
		ph = ph->next;
	}
	return (-1);
}

