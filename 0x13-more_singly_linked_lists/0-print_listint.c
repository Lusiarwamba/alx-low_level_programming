#include "lists.h"

/**
 * print_listint - this function prints all elements in linked list
 * @h: print linked lists of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);


