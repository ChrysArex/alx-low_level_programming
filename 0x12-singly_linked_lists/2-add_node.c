#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node - add new node
 *
 * Description: function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: pointer to the string of the new element
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int n;
	char *strd = strdup(str), *pstrd = strd;
	list_t *new = malloc(sizeof(list_t));

	for (n = 0; *pstrd != '\0'; pstrd++)
		n++;
	if (new == NULL)
		return (NULL);
	new->str = strd;
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
