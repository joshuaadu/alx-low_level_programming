#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curr;
	size_t n = 0;

	if (!h)
	{
		return (EXIT_FAILURE);
	}
	curr = (dlistint_t *) h;
	while (curr->prev)
		curr = (dlistint_t *) h->prev;
	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		n++;
	}
	return (n);
}
