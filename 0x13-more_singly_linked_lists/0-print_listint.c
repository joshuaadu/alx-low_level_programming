#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the linked list
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 1;

	if (!h)
		return (n);

	printf("%d\n", h->n);
	n++;
	print_listint(h->next);

	return (n);
}
