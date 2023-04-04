#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the haed of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (1)
	{
		printf("%d\n", h->n);
		if (h->next == NULL)
			return (++n);
		n++;
		h = h->next;
	}

}
