#include "lists.h"
/**
 * dlistint_len - find the number of elements in a linked dlistint_t list
 * @h: head of linked list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
	{
		return (n);
	}
	while (h->prev)
		h = h->prev;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
