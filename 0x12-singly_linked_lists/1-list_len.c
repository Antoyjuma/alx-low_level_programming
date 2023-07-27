#include "lists.h"

/**
* list_len - calculates the length of a linked list,
* @h: pointer to the header of the linked list
* Return: the total amount of nodes in the linked list
*/

size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);

	for (j = 1; h->next != NULL; j++)
		h = h->next;

	return (j);
}
