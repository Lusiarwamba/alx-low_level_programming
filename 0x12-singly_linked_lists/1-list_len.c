#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that return length in a linked list
 * @h: pointer in the list_t list
 *
 * Return: it returns the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h != NULL)
	{
		y++;
		h = h->next;
	}
	return (y);
}

