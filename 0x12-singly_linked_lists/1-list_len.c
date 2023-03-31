#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - number of element in linked list
 *
 * Description: function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the head of the list
 * Return: the number of element
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; n++)
		h = h->next;
	return (n);
}

