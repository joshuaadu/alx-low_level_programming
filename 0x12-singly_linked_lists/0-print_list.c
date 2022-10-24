#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of a linked list
 * Return: If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] (%s)\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
