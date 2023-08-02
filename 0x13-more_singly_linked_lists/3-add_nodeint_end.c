#include "lists.h"

/**
* add_nodeint_end - add a new node at the end
* of a linked list.
* @head: head of a list.
* @n: n element
*
* Return: address of the new element. NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;

	return (new);
}
