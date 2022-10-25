#include "lists.h"
#include <stdlib.h>

/**
 * add_nodient - Add a new node at the beggining of a list
 * @head: Address of the first node of a list.
 * @n: integer to insert into the new node.
 *
 * Return: Address of the new node.
 */

listint_t *add_nodient(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
