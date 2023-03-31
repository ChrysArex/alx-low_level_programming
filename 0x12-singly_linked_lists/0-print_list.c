#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print linked list
 *
 * Description: function that prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; n++)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (n);
}

