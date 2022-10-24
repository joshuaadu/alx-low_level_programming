#include "lists.h"

/**
 * list_len - get the number of elements in a linked list_t list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
