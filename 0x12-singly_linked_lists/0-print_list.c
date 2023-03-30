#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t count = 0;

while (h)
	if (!h->str)
	       print"[0] (nill)\n"
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next
	s++
}

return (s);

