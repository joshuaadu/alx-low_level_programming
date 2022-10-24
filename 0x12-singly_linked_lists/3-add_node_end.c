#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (!new)
		return (NULL);
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
