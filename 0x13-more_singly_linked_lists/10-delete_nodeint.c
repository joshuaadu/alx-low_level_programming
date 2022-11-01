#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: head of the linked list
 * @idx: index of the list where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *temp = NULL;

	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	for (i = 0; curr && i <= index; i++)
	{
		if (i == index - 1)
		{
			temp = curr->next;
			curr = temp->next;
			free(temp);
			return (1);
		}
		else
			curr = curr->next;
	}

	return (-1);
}
