#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the linked list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (!head)
		return;

	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}

	*head = NULL;

}
