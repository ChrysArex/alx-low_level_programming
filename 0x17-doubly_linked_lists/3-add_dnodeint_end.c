#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: the first element of the list
 * @n: the value of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *head_2 = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = *head;
		*head = new;
		return (new);
	}
	while (head_2->next)
		head_2 = head_2->next;
	new->next = NULL;
	new->prev = head_2;
	head_2->next = new;
	return (new);
}
