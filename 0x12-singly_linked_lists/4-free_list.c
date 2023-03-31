#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * free_list - free a linked list
 *
 * Description: function that frees a list_t list.
 * @head: pointer to the head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *pnxt;

	while (head->next != NULL)
	{
		pnxt = head;
		head = head->next;
		free(pnxt);
	}
	free(head);
}
