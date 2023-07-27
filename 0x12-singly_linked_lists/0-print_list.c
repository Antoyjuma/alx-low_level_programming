/*
 * File: 0-print_list.c
 * Auth: David James Taiye
 */

#include "lists.h"
#include <stdio.h>
/**
    * print_list - prints all elements of a linked list
    * @h: pointer to a linked list head.
    * Return: the number of total nodes in the linked list
    */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
