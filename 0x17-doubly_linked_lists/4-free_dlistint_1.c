#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: point of head of linked
 * @n: value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (!head)
		return;
    if (!head->next)
    {
        printf("Address of head: %p\n", (void*)head);
        free(head);
        return;
    }
    printf("Address of head: %p\n", (void*)head);
    printf("Address of head->prev: %p\n", (void*)head->prev);
    printf("Address of head->next: %p\n", (void*)head->next);
    free(head->prev);
    printf("\n---\n");
    
    for (curr = head->next; curr->next; curr = curr->next)
    {
        printf("Address of prev: %p\n", (void*)curr->prev);
        printf("Address of curr: %p\n", (void*)curr);
        printf("Address of next: %p\n", (void*)curr->next);
        printf("---\n");
        free(curr->prev);
    }
    printf("Address of curr: %p\n", (void*)curr);

    free(curr);
    return;
}
