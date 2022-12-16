#include "lists.h"
/**
 * get_dnodeint_at_index - adds a new node at the end of a dlistint_t list
 * @h: point of head of linked
 * @idx: the index of the node, starting from 0
 * @n: new value
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	curr = *h;

	while (curr)
	{
		if (i == idx)
			{
				new_node->next = curr;
				new_node->prev = curr->prev;
				curr->prev->next = new_node;
				curr->prev = new_node;
				return (new_node);
			}
		i++;
		curr = curr->next;
	}
	return (NULL);
}
