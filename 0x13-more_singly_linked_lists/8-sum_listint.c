#include "lists.h"

/**
 * sum_listint - get the sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 *
 * Return: if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (!head)
		return (0);

	curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
