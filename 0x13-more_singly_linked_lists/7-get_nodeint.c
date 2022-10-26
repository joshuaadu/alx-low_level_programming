#include "lists.h"

/**
 * get_nodeint_at_index - get node at an index
 * @head: head of the linked list
 * @index: index of node
 *
 * Return: the nth node. if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	curr = head;

	while (curr)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}

	return (NULL);
}
