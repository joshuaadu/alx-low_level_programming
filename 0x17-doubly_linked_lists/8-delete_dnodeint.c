#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: point of head of linked
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr, *temp;

	curr = *head;
	while (curr)
	{
		if (i == index)
		{
			temp = curr;
			if (curr->prev)
				curr->prev->next = curr->next;
			else
				*head = curr->next;
			if (curr->next)
				curr->next->prev = curr->prev;
			free(temp);
			return (1);
		}
		i++;
		curr = curr->next;
	}
	return (-1);
}
