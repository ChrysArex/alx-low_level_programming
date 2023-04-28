#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * listint_len - prints the number of elements in a linked listint_t list.
 * @h: pointer to the haed of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	{
	size_t n = 0;

	while (1)
	{
		if (h->next == NULL)
			return (++n);
		n++;
		h = h->next;
	}

}
}
