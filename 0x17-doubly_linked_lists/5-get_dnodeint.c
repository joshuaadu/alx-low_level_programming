#include "lists.h"
/**
 * get_dnodeint_at_index - adds a new node at the end of a dlistint_t list
 * @head: point of head of linked
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node; if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr;

	curr = head;
	while (curr)
	{
		if (i == index)
			return (curr);
		i++;
		curr = curr->next;
	}
	return (NULL);
}
