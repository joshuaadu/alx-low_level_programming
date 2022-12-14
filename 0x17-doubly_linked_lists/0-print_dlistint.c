#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
