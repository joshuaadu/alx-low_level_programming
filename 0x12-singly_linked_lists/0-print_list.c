#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of a linked list
 * Return: If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	int count = 1;

    if (!h)
    {
        return (0);
    }
	if (h->str)
	{
		printf("[%d] (%s)\n", h->len, h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	if (h->next)
	{
		count++;
		print_list(h->next);
	}
	return (count);
}
