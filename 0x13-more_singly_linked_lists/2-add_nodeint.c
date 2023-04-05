#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: a pointer to the head of listint_t
 * @n: integer
 * Return: ppointer to the node, or NULL if it failis
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

