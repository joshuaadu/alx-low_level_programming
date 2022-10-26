#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the linked list
 * @idx: index of the list where the new node should be added.
 * @n: value of node
 * Index starts at 0
 *
 * Return: address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 *  do not add the new node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	unsigned int i = 0;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; curr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		else
			curr = curr->next;
	}

	return (NULL);
}
