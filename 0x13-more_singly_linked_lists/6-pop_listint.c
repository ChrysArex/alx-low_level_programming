#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list
 * @head: pointer of a pointer to the head of the list
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ph = *head;
	int n = ph->n;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	free(ph);
	return (n);
}
