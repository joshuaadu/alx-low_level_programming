#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of the linked list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *previous;

	while (head)
	{
		previous = head;
		head = head->next;
		free(previous);
	}

}
