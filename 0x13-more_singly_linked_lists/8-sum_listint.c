#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - function that get the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the haed of the list
 * Return: sum of nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *ph = head;
	int n = 0;

	if (head == NULL)
		return (0);
	while (ph != NULL)
	{
		n += ph->n;
		ph = ph->next;
	}
	return (n);
}
