#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h2;

	while (head->next != NULL)
	{
		h2 = head;
		head = head->next;
		free(h2);
	}
	free(head);
}
