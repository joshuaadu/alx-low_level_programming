#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: point of head of linked
 * @n: value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	curr = *head;
	if (curr)
	{
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = curr;

	return (new_node);
}
