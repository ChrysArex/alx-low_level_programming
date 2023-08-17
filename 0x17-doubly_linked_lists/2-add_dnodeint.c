#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: the first element of the list
 * @n: the value of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);
	if (*head != NULL)
		(*head)->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
