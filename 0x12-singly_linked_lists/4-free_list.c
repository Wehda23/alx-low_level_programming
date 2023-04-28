#include "lists.h"


/**
 * free_list - function that frees memory of linked list.
 * @head: Pointer to a node.
 * Return: Void.
 */
void free_list(list_t *head)
{
    list_t *current, *next;

	current = head;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}