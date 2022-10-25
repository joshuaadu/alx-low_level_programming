#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the linked list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *previous;
	listint_t *curr = *head;

	while (curr)
	{
		previous = curr;
		curr = curr->next;
		free(previous);
	}

	*head = NULL;

}
