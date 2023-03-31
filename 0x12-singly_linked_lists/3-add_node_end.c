#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_node_end - add node
 *
 * Description: function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: the string we want to insert in the new element
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int n;
	list_t *ph = *head;
	char *strd = strdup(str), *pstrd = strd;
	list_t *new = malloc(sizeof(list_t));

	for (n = 0; *pstrd != '\0'; pstrd++)
		n++;
	if (new == NULL)
		return (NULL);
	new->str = strd;
	new->len = n;
	new->next = NULL;
	if (ph != NULL)
	{
		while (ph->next != NULL)
			ph = ph->next;
		ph->next = new;
	}
	else
		*head = new;
	return (new);
}
