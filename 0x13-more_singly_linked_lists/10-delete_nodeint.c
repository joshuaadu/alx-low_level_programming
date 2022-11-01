#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 *
 * @head: head of the linked list
 * @index: index of the list node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *temp, *del;

	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; curr->next ; i++, curr = curr->next)
	{
		if (i == index - 1)
		{
			temp = curr->next->next;
			del = curr->next;
			curr->next = temp;
			free(del);
			return (1);
		}
	}

	return (-1);
}
