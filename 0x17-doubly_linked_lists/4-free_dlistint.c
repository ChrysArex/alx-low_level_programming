#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del;

	while (head)
	{
		del = head->next;
		free(head);
		head = del;
	}
}
