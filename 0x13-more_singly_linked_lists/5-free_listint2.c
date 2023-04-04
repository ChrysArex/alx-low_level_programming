#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h2;

	while ((*head)->next != NULL)
	{
		h2 = *head;
		*head = (*head)->next;
		free(h2);
	}
	h2 = *head;
	*head = NULL;
	free(h2);
}

