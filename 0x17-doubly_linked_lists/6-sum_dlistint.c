#include "lists.h"
/**
 * sum_dlistint - adds a new node at the end of a dlistint_t list
 * @head: point of head of linked
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr;

	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
