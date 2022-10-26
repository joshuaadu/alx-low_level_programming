#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list
 *
 * Return: head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int val;

	if (!*head)
		return (0);

	popped = *head;

	*head = (*head)->next;
	val = popped->n;
	free(popped);
	return (val);
}
