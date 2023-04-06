#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *current = *head;
		*head = current->next;
		free(current);
	}

	*head = NULL;
}


