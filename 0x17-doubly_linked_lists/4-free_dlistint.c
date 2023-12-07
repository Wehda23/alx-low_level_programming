#include "lists.h"

/**
 * free_dlistint - function that frees linked list
 * @head: pointer to start of a linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
