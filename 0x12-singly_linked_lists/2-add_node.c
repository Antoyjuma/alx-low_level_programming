#include "lists.h"
#include <string.h>

/**
* add_node - creates a node and adds it to a linked list
* @head: Pointer to head of the linked list
* @str: string to be assigned to the node
* Return: Pointer to the head of the linked list
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
